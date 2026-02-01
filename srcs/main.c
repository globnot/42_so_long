/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/02/01 13:51:36 by aborda           ###   ########.fr       */
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
		mlx_hook(game->win, 17, 0, callback_cross, game);
		mlx_key_hook(game->win, callback_key, game);
		mlx_loop(game->mlx);
		free_map(map);
		return (err_msg(ERR_OK));
	}
	return (1);
}
