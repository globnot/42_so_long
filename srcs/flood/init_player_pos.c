/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:16:41 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 15:40:38 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init_player_pos(t_flood *flood, t_map *map)
{
	int		i;
	size_t	j;

	i = 0;
	while (i < map->nb_line)
	{
		j = 0;
		while (j < map->line_len)
		{
			if (map->map_array[i][j] != 'P')
				j++;
			else
			{
				flood->player_pos_y = i;
				flood->player_pos_x = j;
				return (1);
			}
		}
		i++;
	}
	return (0);
}
