/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nb_collectible.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:06:00 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 16:14:07 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init_nb_collectible(t_flood *flood, t_map *map)
{
	int		i;
	size_t	j;
	int		count;

	i = 0;
	count = 0;
	while (i < map->nb_line)
	{
		j = 0;
		while (j < map->line_len)
		{
			if (map->map_array[i][j] == 'C')
				count++;
			j++;
		}
		i++;
	}
	flood->nb_collectible = count;
	return (1);
}
