/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:32:18 by aborda            #+#    #+#             */
/*   Updated: 2026/01/31 08:57:30 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_game	*init_s_game(t_map *map)
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	if (game == NULL)
		return (NULL);
	game->title = "Coquillette";
	game->size = 32;
	game->map = map;
	game->mlx = mlx_init();
	game->win = mlx_new_window(
			game->mlx, game->map->line_len * game->size,
			game->map->nb_line * game->size, "Title");
	game->img_wall = mlx_xpm_file_to_image(
			game->mlx, "textures/wall.xpm", &game->size, &game->size);
	game->img_floor = mlx_xpm_file_to_image(
			game->mlx, "textures/floor.xpm", &game->size, &game->size);
	game->img_collectible = mlx_xpm_file_to_image(
			game->mlx, "textures/collectible.xpm", &game->size, &game->size);
	game->img_exit = mlx_xpm_file_to_image(
			game->mlx, "textures/exit.xpm", &game->size, &game->size);
	game->img_player = mlx_xpm_file_to_image(
			game->mlx, "textures/player.xpm", &game->size, &game->size);
	return (game);
}
