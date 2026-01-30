/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:26:09 by aborda            #+#    #+#             */
/*   Updated: 2026/01/30 11:10:53 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	is_valid_pos(t_flood *flood, size_t player_pos_x, int player_pos_y)
{
	if (player_pos_x > 0 && player_pos_y > 0
		&& player_pos_x < flood->line_len && player_pos_y < flood->nb_line
		&& flood->map_array_copy[player_pos_y][player_pos_x] != '1'
		&& flood->map_array_copy[player_pos_y][player_pos_x] != 'V')
		return (1);
	return (0);
}

int	flood_fill(t_flood *flood, size_t player_pos_x, int player_pos_y)
{
	if (is_valid_pos(flood, player_pos_x, player_pos_y))
	{
		if (flood->map_array_copy[player_pos_y][player_pos_x] == 'C')
			flood->found_collectible++;
		if (flood->map_array_copy[player_pos_y][player_pos_x] == 'E')
			flood->found_exit = 1;
		flood->map_array_copy[player_pos_y][player_pos_x] = 'V';
		flood_fill(flood, player_pos_x + 1, player_pos_y);
		flood_fill(flood, player_pos_x - 1, player_pos_y);
		flood_fill(flood, player_pos_x, player_pos_y + 1);
		flood_fill(flood, player_pos_x, player_pos_y - 1);
	}
	return (0);
}
