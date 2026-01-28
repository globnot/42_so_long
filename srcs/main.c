/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 11:24:48 by aborda           ###   ########.fr       */
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
			return (1);
		validation = is_valid_map(map);
		if (validation != 0)
			return (validation);
		free_map(map);
		return (0);
	}
	return (1);
}
