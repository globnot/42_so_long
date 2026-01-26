/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:16 by aborda            #+#    #+#             */
/*   Updated: 2026/01/26 12:54:35 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"

typedef struct s_map
{
	int		fd;
	int		nb_line;
	int		lin_len;
	char	**map_array;
}	t_map;

//MAP
t_map	*init_t_map(char *file);
int		init_nb_line(t_map *map);
int		init_map(t_map *map);

//VALIDATION
int		contain_exit(char **map);
int		contain_start(char **map);
int		contain_collectible(char **map);
int		is_rectangular(char **map);
int		is_closed_by_walls(char **map, int nb_line);

//UTILS
void	free_map(char **map);

#endif
