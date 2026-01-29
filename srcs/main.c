/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 16:12:36 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map	*map;
	t_flood	*flood;
	int		valid_map;

	if (ac == 2)
	{
		map = init_s_map(av[1]);
		if (map == NULL)
			return (err_msg(ERR_INIT_S_MAP));
		valid_map = is_valid_map(map);
		if (valid_map != 0)
			return (free_map(map), valid_map);
		flood = init_s_flood(map);
		if (flood == NULL)
			return (err_msg(ERR_INIT_S_FLOOD));
		ft_printf("COLLECTIBLES = %d\n", flood->nb_collectible);
		free_map(map);
		free_flood(flood);
		return (err_msg(ERR_OK));
	}
	return (1);
}
