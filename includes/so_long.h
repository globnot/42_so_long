/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:16 by aborda            #+#    #+#             */
/*   Updated: 2026/01/26 13:58:21 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"

typedef struct s_map
{
	int		fd;
	int		nb_line;
	size_t	line_len;
	char	**map_array;
}	t_map;

//MAP
t_map	*init_s_map(char *file);
int		init_nb_line(t_map *map);
int		init_map(t_map *map);

//VALIDATION
int		contain_exit(t_map *map);
int		contain_start(t_map *map);
int		contain_collectible(t_map *map);
int		is_rectangular(t_map *map);
int		is_closed_by_walls(t_map *map);

//UTILS
void	free_map(char **map);

#endif
