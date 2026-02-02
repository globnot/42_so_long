/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_s_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:32:18 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 09:51:37 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_game	*init_s_game(t_map *map)
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	if (game == NULL)
		return (NULL);
	game->map = map;
	game->title = "Coquillette";
	game->tile_size = 64;
	if (!init_player_pos_game(game, map))
		return (free_game(game), NULL);
	game->mlx = NULL;
	game->win = NULL;
	game->img_wall = NULL;
	game->img_floor = NULL;
	game->img_collectible = NULL;
	game->img_exit = NULL;
	game->img_player = NULL;
	game->mlx = mlx_init();
	if (game->mlx == NULL)
		return (free_game(game), NULL);
	game->win = mlx_new_window(game->mlx, game->map->line_len * game->tile_size,
			game->map->nb_line * game->tile_size, game->title);
	if (game->win == NULL)
		return (free_game(game), NULL);
	if (!init_img(game))
		return (free_game(game), NULL);
	return (game);
}
