/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_collectible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:06:00 by aborda            #+#    #+#             */
/*   Updated: 2026/02/02 11:13:41 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_collectible(t_map *map)
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
	return (count);
}
