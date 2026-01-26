/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_s_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:43:38 by aborda            #+#    #+#             */
/*   Updated: 2026/01/26 15:58:49 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_map	*init_s_map(char *file)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (map == NULL)
		return (NULL);
	map->fd = open(file, O_RDONLY);
	if (map->fd == -1)
	{
		free(map);
		return (NULL);
	}
	if (init_nb_line(map) == 1)
	{
		close(map->fd);
		free(map);
		return (NULL);
	}
	map->fd = open(file, O_RDONLY);
	if (map->fd == -1)
	{
		close(map->fd);
		free(map);
		return (NULL);
	}
	if (init_map(map) == 1)
	{
		close(map->fd);
		free(map);
		return (NULL);
	}
	map->line_len = ft_strlen(map->map_array[0]);
	return (map);
}

int	init_nb_line(t_map *map)
{
	char	*current_line;

	current_line = get_next_line(map->fd);
	if (current_line == NULL)
	{
		close(map->fd);
		return (1);
	}
	map->nb_line = 0;
	while (current_line != NULL)
	{
		map->nb_line++;
		free(current_line);
		current_line = get_next_line(map->fd);
	}
	close(map->fd);
	return (0);
}

int	clean_s_map(t_map *map)
{
	free_map(map->map_array);
	return (1);
}

int	init_map(t_map *map)
{
	int		i;
	char	*current_line;
	char	*trimed_current_line;

	map->map_array = malloc(sizeof(char *) * (map->nb_line + 1));
	if (map->map_array == NULL)
		return (1);
	current_line = get_next_line(map->fd);
	if (current_line == NULL)
	{
		free(current_line);
		free(map->map_array);
		return (1);
	}
	trimed_current_line = ft_strtrim(current_line, "\n");
	if (trimed_current_line == NULL)
	{
		free(map->map_array);
		free(current_line);
		return (1);
	}
	free(current_line);
	i = 0;
	while (current_line != NULL)
	{
		map->map_array[i] = trimed_current_line;
		i++;
		current_line = get_next_line(map->fd);
		if (current_line == NULL)
			break;
		trimed_current_line = ft_strtrim(current_line, "\n");
		if (trimed_current_line == NULL)
		{
			free_map(map->map_array);
			free(current_line);
			return (1);
		}
		free(current_line);
	}
	close(map->fd);
	map->map_array[i] = NULL;
	if (i != map->nb_line)
	{
		free_map(map->map_array);
		return (1);
	}
	return (0);
}
