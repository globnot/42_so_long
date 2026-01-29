/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_s_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:43:38 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 13:11:07 by aborda           ###   ########.fr       */
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
