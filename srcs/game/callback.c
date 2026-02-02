/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callback.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:52:26 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 08:37:57 by aborda           ###   ########.fr       */
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
	}
	if (keycode == KEY_A)
	{
	}
	if (keycode == KEY_S)
	{
	}
	if (keycode == KEY_D)
	{
	}
	return (0);
}
