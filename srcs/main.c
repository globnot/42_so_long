/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/25 12:22:55 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	int		nb_line;
	char	*file;
	char	**map;
	int		validation;

	if (ac == 2)
	{
		file = av[1];
		nb_line = count_line(file);
		if (nb_line == -1)
			return (1);
		map = init_map(file, nb_line);
		if (map == NULL)
			return (1);
		validation = is_closed_by_walls(map, nb_line);
		ft_printf("VALIDATION: %d", validation);
		free_map(map);
		return (0);
	}
	return (1);
}
