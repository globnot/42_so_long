/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_s_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:43:38 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 11:34:04 by aborda           ###   ########.fr       */
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
