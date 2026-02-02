/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callback.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:52:26 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 11:36:46 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	callback_cross(void *param)
{
	t_game	*game;

	game = (t_game *)param;
	free_game(game);
	exit(0);
	return (0);
}

int	callback_key(int keycode, void *param)
{
	t_game	*game;

	game = (t_game *)param;
	if (keycode == KEY_ESC)
	{
		free_game(game);
		exit(0);
	}
	if (keycode == KEY_W)
	{
		if (is_valid_next(game, game->player_x, game->player_y - 1))
		{
			game->player_y--;
			game->move++;
			if(game->map->map_array[game->player_y][game->player_x] == 'C')
			{
				game->remaining_collectible--;
				game->map->map_array[game->player_y][game->player_x] = '0';
				ft_printf("COFFRES RESTANTS : %d\n", game->remaining_collectible);
			}
			ft_printf("MOVES : %d\n", game->move);
			render_map(game);
		}
	}
	if (keycode == KEY_A)
	{
		if (is_valid_next(game, game->player_x - 1, game->player_y))
		{
			game->player_x--;
			game->move++;
			if(game->map->map_array[game->player_y][game->player_x] == 'C')
			{
				game->remaining_collectible--;
				game->map->map_array[game->player_y][game->player_x] = '0';
				ft_printf("COFFRES RESTANTS : %d\n", game->remaining_collectible);
			}
			ft_printf("MOVES : %d\n", game->move);
			render_map(game);
		}
	}
	if (keycode == KEY_S)
	{
		if (is_valid_next(game, game->player_x, game->player_y + 1))
		{
			game->player_y++;
			game->move++;
			if(game->map->map_array[game->player_y][game->player_x] == 'C')
			{
				game->remaining_collectible--;
				game->map->map_array[game->player_y][game->player_x] = '0';
				ft_printf("COFFRES RESTANTS : %d\n", game->remaining_collectible);
			}
			ft_printf("MOVES : %d\n", game->move);
			render_map(game);
		}
	}
	if (keycode == KEY_D)
	{
		if (is_valid_next(game, game->player_x + 1, game->player_y))
		{
			game->player_x++;
			game->move++;
			if(game->map->map_array[game->player_y][game->player_x] == 'C')
			{
				game->remaining_collectible--;
				game->map->map_array[game->player_y][game->player_x] = '0';
				ft_printf("COFFRES RESTANTS : %d\n", game->remaining_collectible);
			}
			ft_printf("MOVES : %d\n", game->move);
			render_map(game);
		}
	}
	return (0);
}
