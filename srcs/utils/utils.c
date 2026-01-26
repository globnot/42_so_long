/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:44:44 by aborda            #+#    #+#             */
/*   Updated: 2026/01/26 10:19:21 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_line(char *file)
{
	int		fd;
	int		count;
	char	*current_line;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (-1);
	current_line = get_next_line(fd);
	if (current_line == NULL)
	{
		close(fd);
		return (0);
	}
	count = 0;
	while (current_line != NULL)
	{
		count++;
		free(current_line);
		current_line = get_next_line(fd);
	}
	close(fd);
	return (count);
}

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
