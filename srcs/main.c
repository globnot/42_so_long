/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 11:04:42 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map	*map;
	t_game	*game;
	int		valid_map;

	if (ac == 2)
	{
		map = init_s_map(av[1]);
		if (map == NULL)
			return (err_msg(ERR_INIT_S_MAP));
		valid_map = is_valid_map(map);
		if (valid_map != 0)
			return (free_map(map), valid_map);
		game = init_s_game(map);
		if (game == NULL)
			return (free_map(map), err_msg(ERR_INIT_GAME));
		render_map(game);
		mlx_hook(game->win, DestroyNotify, ButtonPressMask, callback_cross,
			game);
		mlx_hook(game->win, KeyPress, KeyPressMask, callback_key, game);
		mlx_loop(game->mlx);
		return (err_msg(ERR_OK));
	}
	return (1);
}
