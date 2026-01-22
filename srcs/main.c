/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/22 10:59:00 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
