/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:43:35 by aborda            #+#    #+#             */
/*   Updated: 2026/01/26 13:48:01 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	contain_exit(t_map *map)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (map->map_array[i] != NULL)
	{
		j = 0;
		while (map->map_array[i][j])
		{
			if (map->map_array[i][j] == 'E')
			{
				j++;
				count++;
			}
			else
				j++;
		}
		i++;
	}
	if (count == 1)
		return (1);
	return (0);
}

int	contain_start(t_map *map)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (map->map_array[i] != NULL)
	{
		j = 0;
		while (map->map_array[i][j])
		{
			if (map->map_array[i][j] == 'P')
			{
				j++;
				count++;
			}
			else
				j++;
		}
		i++;
	}
	if (count == 1)
		return (1);
	return (0);
}

int	contain_collectible(t_map *map)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (map->map_array[i] != NULL)
	{
		j = 0;
		while (map->map_array[i][j])
		{
			if (map->map_array[i][j] == 'C')
			{
				j++;
				count++;
			}
			else
				j++;
		}
		i++;
	}
	if (count >= 1)
		return (1);
	return (0);
}
