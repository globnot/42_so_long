/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:33:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 12:45:25 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_map_array(t_map *map)
{
	int	i;

	i = 0;
	while (map->map_array[i] != NULL)
	{
		free(map->map_array[i]);
		i++;
	}
	free(map->map_array);
}

void	free_map(t_map *map)
{
	free_map_array(map);
	free(map);
}
