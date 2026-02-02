/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_s_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:32:18 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 13:34:10 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_game_value(t_game *game)
{
	game->title = "Coquillette";
	game->tile_size = 64;
	game->move = 0;
	game->mlx = NULL;
	game->win = NULL;
	game->img_wall = NULL;
	game->img_floor = NULL;
	game->img_collectible = NULL;
	game->img_open_exit = NULL;
	game->img_close_exit = NULL;
	game->img_player = NULL;
}

static int	init_img(t_game *game)
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
	game->img_open_exit = mlx_xpm_file_to_image(
			game->mlx, DIR_OPEN_EXIT, &game->tile_size, &game->tile_size);
	if (game->img_open_exit == NULL)
		return (0);
	game->img_close_exit = mlx_xpm_file_to_image(
			game->mlx, DIR_CLOSE_EXIT, &game->tile_size, &game->tile_size);
	if (game->img_close_exit == NULL)
		return (0);
	game->img_player = mlx_xpm_file_to_image(
			game->mlx, DIR_PLAYER, &game->tile_size, &game->tile_size);
	if (game->img_player == NULL)
		return (0);
	return (1);
}

static int	init_win(t_game *game)
{
	game->win = mlx_new_window(game->mlx, game->map->line_len * game->tile_size,
			game->map->nb_line * game->tile_size, game->title);
	if (game->win == NULL)
		return (free_game(game), 0);
	return (1);
}

t_game	*init_s_game(t_map *map)
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	if (game == NULL)
		return (NULL);
	init_game_value(game);
	game->remaining_collectible = count_collectible(map);
	game->map = map;
	if (!init_player_pos_game(game, map))
		return (free_game(game), NULL);
	game->mlx = mlx_init();
	if (game->mlx == NULL)
		return (free_game(game), NULL);
	if (!init_win(game))
		return (free_game(game), NULL);
	if (!init_img(game))
		return (free_game(game), NULL);
	return (game);
}
