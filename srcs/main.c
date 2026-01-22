/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/22 10:30:33 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_line(char *file)
{
	int		fd;
	int		count;
	char	*current_line;

	fd = open(file, O_RDONLY);
	current_line = get_next_line(fd);
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

char	**init_map(char *file, int count)
{
	int		fd;
	int		i;
	char	*current_line;
	char	**map_array;

	map_array = malloc(sizeof(char *) * (count + 1));
	if (map_array == NULL)
		return (NULL);
	fd = open(file, O_RDONLY);
	current_line = get_next_line(fd);
	i = 0;
	while (current_line != NULL)
	{
		map_array[i] = current_line;
		i++;
		current_line = get_next_line(fd);
	}
	close(fd);
	map_array[i] = NULL;
	return (map_array);
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

int	main(void)
{
	int		count;
	int		i;
	char	*file;
	char	**map;

	file = "maps/map_valid.ber";
	count = count_line(file);
	map = init_map(file, count);
	if (map == NULL)
		return (1);
	i = 0;
	while (i < count)
	{
		ft_printf("%s", map[i]);
		i++;
	}
	free_map(map);
	return (0);
}
