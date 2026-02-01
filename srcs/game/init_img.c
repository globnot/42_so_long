/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:19:02 by aborda            #+#    #+#             */
/*   Updated: 2026/02/01 11:37:05 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init_img(t_game *game)
{
	game->img_wall = mlx_xpm_file_to_image(
			game->mlx, "textures/wall.xpm", &game->size, &game->size);
	if (game->img_wall == NULL)
		return (0);
	game->img_floor = mlx_xpm_file_to_image(
			game->mlx, "textures/floor.xpm", &game->size, &game->size);
	if (game->img_floor == NULL)
		return (0);
	game->img_collectible = mlx_xpm_file_to_image(
			game->mlx, "textures/collectible.xpm", &game->size, &game->size);
	if (game->img_collectible == NULL)
		return (0);
	game->img_exit = mlx_xpm_file_to_image(
			game->mlx, "textures/exit.xpm", &game->size, &game->size);
	if (game->img_exit == NULL)
		return (0);
	game->img_player = mlx_xpm_file_to_image(
			game->mlx, "textures/player.xpm", &game->size, &game->size);
	if (game->img_player == NULL)
		return (0);
	return (1);
}
