/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:31:48 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 11:32:43 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init_map(t_map *map)
{
	int		i;
	char	*current_line;
	char	*trimed_current_line;

	map->map_array = malloc(sizeof(char *) * (map->nb_line + 1));
	if (map->map_array == NULL)
		return (1);
	current_line = get_next_line(map->fd);
	if (current_line == NULL)
		return (free(current_line), free_map_array(map));
	trimed_current_line = ft_strtrim(current_line, "\n");
	if (trimed_current_line == NULL)
		return (free(current_line), free_map_array(map));
	free(current_line);
	i = 0;
	while (current_line != NULL)
	{
		map->map_array[i] = trimed_current_line;
		i++;
		current_line = get_next_line(map->fd);
		if (current_line == NULL)
			break ;
		trimed_current_line = ft_strtrim(current_line, "\n");
		if (trimed_current_line == NULL)
			return (free(current_line), free_map_array(map));
		free(current_line);
	}
	close(map->fd);
	map->map_array[i] = NULL;
	if (i != map->nb_line)
		return (free_map_array(map));
	return (0);
}
