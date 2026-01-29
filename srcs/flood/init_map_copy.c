/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:17:21 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 14:31:39 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**init_map_copy(t_map *map, t_flood *flood)
{
	int		i;

	flood->map_array_copy = malloc(sizeof(char *) * (map->nb_line + 1));
	if (flood->map_array_copy == NULL)
		return (free(flood), NULL);
	i = 0;
	while (i < map->nb_line)
	{
		flood->map_array_copy[i] = ft_strdup(map->map_array[i]);
		if (flood->map_array_copy[i] == NULL)
			return (free_flood(flood), NULL);
		i++;
	}
	flood->map_array_copy[i] = NULL;
	return (flood->map_array_copy);
}
