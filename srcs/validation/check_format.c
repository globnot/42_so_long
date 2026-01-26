/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 10:13:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/26 16:20:37 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_rectangular(t_map *map)
{
	int		i;

	i = 0;
	while (map->map_array[i] != NULL)
	{
		if (ft_strlen(map->map_array[i]) != map->line_len)
			return (0);
		i++;
	}
	return (1);
}

int	is_closed_by_walls(t_map *map)
{
	int		i;

	i = 0;
	while (map->map_array[0][i])
	{
		if (map->map_array[0][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (map->map_array[map->nb_line - 1][i])
	{
		if (map->map_array[map->nb_line - 1][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (map->map_array[i])
	{
		if (map->map_array[i][0] != '1'
			|| map->map_array[i][map->line_len - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}
