/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_s_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:43:38 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 16:52:54 by aborda           ###   ########.fr       */
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
		return (free(map), NULL);
	if (init_nb_line(map) == 1)
		return (close(map->fd), free(map), NULL);
	map->fd = open(file, O_RDONLY);
	if (map->fd == -1)
		return (close(map->fd), free(map), NULL);
	if (init_map(map) == 1)
		return (close(map->fd), free(map), NULL);
	map->line_len = ft_strlen(map->map_array[0]);
	return (map);
}

int	init_nb_line(t_map *map)
{
	char	*current_line;

	current_line = get_next_line(map->fd);
	if (current_line == NULL)
		return (close(map->fd), 1);
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

int	init_map(t_map *map)
{
	int		i;
	char	*current_line;
	char	*trimed_current_line;

	map->map_array = malloc(sizeof(char *) * (map->nb_line + 1));
	if (map->map_array == NULL)
		return (1);
	i = 0;
	current_line = get_next_line(map->fd);
	if (current_line == NULL)
		return (free(current_line), free_map_array(map));
	while (current_line != NULL)
	{
		trimed_current_line = ft_strtrim(current_line, "\n");
		if (trimed_current_line == NULL)
			return (free(current_line), free_map_array(map));
		map->map_array[i] = trimed_current_line;
		free(current_line);
		i++;
		current_line = get_next_line(map->fd);
		if (current_line == NULL)
		{
			if (i != map->nb_line)
				return (free_map_array(map));
			break ;
		}
	}
	map->map_array[i] = NULL;
	close(map->fd);
	return (0);
}
