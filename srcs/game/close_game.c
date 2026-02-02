/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:41:43 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 13:02:12 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_game(t_game *game)
{
	if (game == NULL)
		return ;
	if (game->img_wall != NULL)
		mlx_destroy_image(game->mlx, game->img_wall);
	if (game->img_floor != NULL)
		mlx_destroy_image(game->mlx, game->img_floor);
	if (game->img_collectible != NULL)
		mlx_destroy_image(game->mlx, game->img_collectible);
	if (game->img_close_exit != NULL)
		mlx_destroy_image(game->mlx, game->img_close_exit);
	if (game->img_player != NULL)
		mlx_destroy_image(game->mlx, game->img_player);
	if (game->win != NULL)
		mlx_destroy_window(game->mlx, game->win);
	if (game->mlx != NULL)
	{
		mlx_destroy_display(game->mlx);
		free(game->mlx);
	}
	free_map(game->map);
	free(game);
}
