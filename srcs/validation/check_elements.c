/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:43:35 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 23:09:54 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	contain_element(t_map *map, char element)
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
			if (map->map_array[i][j] == element)
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
