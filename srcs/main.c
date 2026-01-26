/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/26 12:37:44 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map	*map;
	int		validation;

	if (ac == 2)
	{
		map = init_t_map(av[1]);
		if (map == NULL)
		{
			ft_printf("Error init_t_map\n");
			return (1);
		}




		validation = is_closed_by_walls(map->map_array, map->nb_line);
		ft_printf("VALIDATION: %d", validation);
		free_map(map->map_array);
		return (0);
	}
	return (1);
}
