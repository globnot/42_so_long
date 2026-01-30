/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:16 by aborda            #+#    #+#             */
/*   Updated: 2026/01/30 11:45:47 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include "errors.h"

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

//MAP
t_map	*init_s_map(char *file);
int		init_nb_line(t_map *map);
int		init_map(t_map *map);
void	free_array(char **array);
void	free_map(t_map *map);
void	free_flood(t_flood *flood);

//FLOOD
t_flood	*init_s_flood(t_map *map);
char	**init_map_copy(t_map *map, t_flood *flood);
int		init_player_pos(t_flood *flood, t_map *map);
int		init_nb_collectible(t_flood *flood, t_map *map);
int		flood_fill(t_flood *flood, size_t player_pos_x, int player_pos_y);

//VALIDATION
int		is_valid_map(t_map *map);
int		contain_element(t_map *map, char element);
int		check_valid_chars(t_map *map);
int		is_rectangular(t_map *map);
int		is_closed_by_walls(t_map *map);
int		check_path(t_map *map);

//UTILS

#endif
