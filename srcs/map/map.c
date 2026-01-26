/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:43:38 by aborda            #+#    #+#             */
/*   Updated: 2026/01/26 10:25:11 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**init_map(char *file, int nb_line)
{
	int		fd;
	int		i;
	char	*current_line;
	char	*trimed_current_line;
	char	**map_array;

	map_array = malloc(sizeof(char *) * (nb_line + 1));
	if (map_array == NULL)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		free(map_array);
		return (NULL);
	}
	current_line = get_next_line(fd);
	if (current_line == NULL)
	{
		free(map_array);
		return (NULL);
	}
	trimed_current_line = ft_strtrim(current_line, "\n");
	if (trimed_current_line == NULL)
	{
		free(map_array);
		free(current_line);
		return (NULL);
	}
	i = 0;
	while (current_line != NULL)
	{
		map_array[i] = trimed_current_line;
		i++;
		current_line = get_next_line(fd);
		if (current_line == NULL)
			break;
		trimed_current_line = ft_strtrim(current_line, "\n");
		if (trimed_current_line == NULL)
		{
			free_map(map_array);
			free(current_line);
			return (NULL);
		}
		free(current_line);
	}
	close(fd);
	map_array[i] = NULL;
	if (i != nb_line)
	{
		free_map(map_array);
		return (NULL);
	}
	return (map_array);
}
