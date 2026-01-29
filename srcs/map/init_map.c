/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:09:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 14:17:52 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static char	*read_and_trimed_current_line(t_map *map)
{
	char	*current_line;
	char	*trimed_current_line;

	current_line = get_next_line(map->fd);
	if (current_line == NULL)
		return (NULL);
	trimed_current_line = ft_strtrim(current_line, "\n");
	if (trimed_current_line == NULL)
		return (free(current_line), NULL);
	free(current_line);
	return (trimed_current_line);
}

int	init_map(t_map *map)
{
	int		i;
	char	*trimed_current_line;

	map->map_array = malloc(sizeof(char *) * (map->nb_line + 1));
	if (map->map_array == NULL)
		return (1);
	i = 0;
	trimed_current_line = read_and_trimed_current_line(map);
	if (trimed_current_line == NULL)
		return (free_array(map->map_array), 1);
	while (trimed_current_line != NULL)
	{
		map->map_array[i] = trimed_current_line;
		i++;
		trimed_current_line = read_and_trimed_current_line(map);
		if (trimed_current_line == NULL)
		{
			if (i != map->nb_line)
				return (free_array(map->map_array), 1);
			break ;
		}
	}
	map->map_array[i] = NULL;
	close(map->fd);
	return (0);
}
