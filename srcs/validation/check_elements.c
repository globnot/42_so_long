/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:43:35 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 10:31:04 by aborda           ###   ########.fr       */
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
	if ((count == 1) || (element == 'C' && count >= 1))
		return (1);
	return (0);
}

int	check_valid_chars(t_map *map)
{
	int		i;
	size_t	j;

	i = 0;
	while (i < map->nb_line)
	{
		j = 0;
		while (j < map->line_len)
		{
			if (ft_strchr("EPC01", map->map_array[i][j]) == NULL)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
