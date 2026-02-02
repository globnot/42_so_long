/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:19:02 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 09:06:26 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init_img(t_game *game)
{
	game->img_wall = mlx_xpm_file_to_image(
			game->mlx, DIR_WALL, &game->tile_size, &game->tile_size);
	if (game->img_wall == NULL)
		return (0);
	game->img_floor = mlx_xpm_file_to_image(
			game->mlx, DIR_FLOOR, &game->tile_size, &game->tile_size);
	if (game->img_floor == NULL)
		return (0);
	game->img_collectible = mlx_xpm_file_to_image(
			game->mlx, DIR_COL, &game->tile_size, &game->tile_size);
	if (game->img_collectible == NULL)
		return (0);
	game->img_exit = mlx_xpm_file_to_image(
			game->mlx, DIR_EXIT, &game->tile_size, &game->tile_size);
	if (game->img_exit == NULL)
		return (0);
	game->img_player = mlx_xpm_file_to_image(
			game->mlx, DIR_PLAYER, &game->tile_size, &game->tile_size);
	if (game->img_player == NULL)
		return (0);
	return (1);
}
