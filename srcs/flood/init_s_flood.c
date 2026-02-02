/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_s_flood.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:50:29 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 11:18:09 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_flood	*init_s_flood(t_map *map)
{
	t_flood	*flood;

	flood = malloc(sizeof(t_flood));
	if (flood == NULL)
		return (NULL);
	flood->found_collectible = 0;
	flood->found_exit = 0;
	flood->nb_line = map->nb_line;
	flood->line_len = map->line_len;
	if (init_map_copy(map, flood) == NULL)
		return (free(flood), NULL);
	if (!init_player_pos_flood(flood, map))
		return (free_flood(flood), NULL);
	flood->nb_collectible = count_collectible(map);
	return (flood);
}
