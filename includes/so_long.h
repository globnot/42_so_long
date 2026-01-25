/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:16 by aborda            #+#    #+#             */
/*   Updated: 2026/01/25 10:31:09 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"

typedef struct s_data
{
	char		**map;
}	t_data;

//MAP
char	**init_map(char *file, int nb_lines);

//VALIDATION
int		contain_exit(char **map);
int		contain_start(char **map);
int		contain_collectible(char **map);
int		is_rectangular(char **map);
int		is_closed_by_walls(char **map, int nb_line);

//UTILS
int		count_line(char *file);
void	free_map(char **map);

#endif
