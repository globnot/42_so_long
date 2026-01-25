/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:43:38 by aborda            #+#    #+#             */
/*   Updated: 2026/01/25 11:42:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**init_map(char *file, int nb_line)
{
	int		fd;
	int		i;
	char	*current_line;
	char	**map_array;

	map_array = malloc(sizeof(char *) * (nb_line + 1));
	if (map_array == NULL)
		return (NULL);
	fd = open(file, O_RDONLY);
	current_line = ft_strtrim(get_next_line(fd), "\n");
	i = 0;
	while (current_line != NULL)
	{
		map_array[i] = current_line;
		i++;
		current_line = ft_strtrim(get_next_line(fd), "\n");
	}
	close(fd);
	map_array[i] = NULL;
	return (map_array);
}
