/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/25 11:50:22 by aborda           ###   ########.fr       */
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
