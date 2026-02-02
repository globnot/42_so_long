/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:23:24 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 10:50:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	render_tile(t_game *game, int c, size_t x, int y)
{
	if (c == '0')
		mlx_put_image_to_window(
			game->mlx, game->win, game->img_floor, x, y);
	if (c == '1')
		mlx_put_image_to_window(
			game->mlx, game->win, game->img_wall, x, y);
	if (c == 'C')
		mlx_put_image_to_window(
			game->mlx, game->win, game->img_collectible, x, y);
	if (c == 'E')
		mlx_put_image_to_window(
			game->mlx, game->win, game->img_exit, x, y);
	if (c == 'P')
		mlx_put_image_to_window(
			game->mlx, game->win, game->img_floor, x, y);
}

int	render_map(t_game *game)
{
	int		i;
	size_t	j;
	char	c;
	size_t	x;
	int		y;

	i = 0;
	while (i < game->map->nb_line)
	{
		j = 0;
		while (j < game->map->line_len)
		{
			c = game->map->map_array[i][j];
			x = j * game->tile_size;
			y = i * game->tile_size;
			render_tile(game, c, x, y);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(game->mlx, game->win, game->img_player,
		game->player_x * game->tile_size, game->player_y * game->tile_size);
	return (0);
}
