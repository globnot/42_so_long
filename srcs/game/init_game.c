/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:32:18 by aborda            #+#    #+#             */
/*   Updated: 2026/01/30 14:55:35 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_game	*init_s_game(t_map *map)
{
	t_game	*game;
	int		width;
	int		height;

	game = malloc(sizeof(t_game));
	if (game == NULL)
		return (NULL);
	width = 16;
	height = 16;
	game->map = map;
	game->mlx = mlx_init();
	game->win = mlx_new_window(
			game->mlx, game->map->line_len * 16,
			game->map->nb_line * 16, "Title");
	game->img_wall = mlx_xpm_file_to_image(
			game->mlx, "textures/wall.xpm", &width, &height);
	game->img_floor = mlx_xpm_file_to_image(
			game->mlx, "textures/floor.xpm", &width, &height);
	game->img_collectible = mlx_xpm_file_to_image(
			game->mlx, "textures/collectible.xpm", &width, &height);
	game->img_exit = mlx_xpm_file_to_image(
			game->mlx, "textures/exit.xpm", &width, &height);
	game->img_player = mlx_xpm_file_to_image(
			game->mlx, "textures/player.xpm", &width, &height);
	return (game);
}
