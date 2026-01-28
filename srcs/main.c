/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 16:36:00 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map	*map;
	int		valid_map;

	if (ac == 2)
	{
		map = init_s_map(av[1]);
		if (map == NULL)
			return (error_msg(ERR_INIT_S_MAP));
		valid_map = is_valid_map(map);
		if (valid_map != 0)
			return (free_map(map), valid_map);
		free_map(map);
		return (0);
	}
	return (1);
}
