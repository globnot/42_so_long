/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_next.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:07:53 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 10:27:50 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid_next(t_game *game, int pos_x, int pos_y)
{
	if (game->map->map_array[pos_y][pos_x] == '1')
		return (0);
	return (1);
}
