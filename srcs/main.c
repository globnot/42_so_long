/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 10:10:53 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map	*map;
	int		validation;

	if (ac == 2)
	{
		map = init_s_map(av[1]);
		if (map == NULL)
		{
			ft_printf("Error init_t_map\n");
			return (1);
		}
		validation = is_valid_map(map);
		ft_printf("VALIDATION: %d", validation);
		free_map(map);
		return (0);
	}
	return (1);
}
