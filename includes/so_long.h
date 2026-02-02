/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:16 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 12:02:24 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include "errors.h"
# include <../minilibx/mlx.h>
# include <X11/X.h>
# include <X11/keysym.h>

# define DIR_WALL			"textures/wall.xpm"
# define DIR_FLOOR			"textures/floor.xpm"
# define DIR_COL			"textures/collectible.xpm"
# define DIR_CLOSE_EXIT		"textures/close_exit.xpm"
# define DIR_PLAYER			"textures/player.xpm"

typedef enum e_key
{
	KEY_W =		119,
	KEY_A =		97,
	KEY_S =		115,
	KEY_D =		100,
	KEY_ESC =	65307
}	t_key;

typedef struct s_map
{
	int		fd;
	int		nb_line;
	size_t	line_len;
	char	**map_array;
}	t_map;

typedef struct s_flood
{
	char	**map_array_copy;
	int		nb_line;
	size_t	line_len;
	int		nb_collectible;
	int		found_collectible;
	int		found_exit;
	size_t	player_pos_x;
	int		player_pos_y;
}	t_flood;

typedef struct s_game
{
	char	*title;
	int		tile_size;
	int		player_x;
	int		player_y;
	int		move;
	int		remaining_collectible;
	t_map	*map;
	void	*mlx;
	void	*win;
	void	*img_wall;
	void	*img_floor;
	void	*img_collectible;
	void	*img_close_exit;
	void	*img_player;
}	t_game;

//FLOOD
t_flood	*init_s_flood(t_map *map);
char	**init_map_copy(t_map *map, t_flood *flood);
int		init_player_pos_flood(t_flood *flood, t_map *map);
int		init_player_pos_game(t_game *game, t_map *map);
int		count_collectible(t_map *map);
int		flood_fill(t_flood *flood, size_t player_pos_x, int player_pos_y);

//GAME
int		callback_cross(void *param);
int		callback_key(int keycode, void *param);
void	free_game(t_game *game);
t_game	*init_s_game(t_map *map);
int		is_valid_next(t_game *game, int pos_x, int pos_y);
int		render_map(t_game *game);

//MAP
t_map	*init_s_map(char *file);
int		init_nb_line(t_map *map);
int		init_map(t_map *map);
void	free_array(char **array);
void	free_map(t_map *map);
void	free_flood(t_flood *flood);

//VALIDATION
int		is_valid_map(t_map *map);
int		contain_element(t_map *map, char element);
int		check_valid_chars(t_map *map);
int		is_rectangular(t_map *map);
int		is_closed_by_walls(t_map *map);
int		check_path(t_map *map);

//UTILS

#endif
