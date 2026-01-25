/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 10:13:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/25 11:49:51 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_rectangular(char **map)
{
	int		i;
	size_t	ref_len;

	i = 0;
	ref_len = ft_strlen(map[i]);
	while (map[i] != NULL)
	{
		if (ft_strlen(map[i]) != ref_len)
			return (0);
		i++;
	}
	return (1);
}

int	is_closed_by_walls(char **map, int nb_line)
{
	int		i;
	size_t	line_len;

	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (map[nb_line - 1][i])
	{
		if (map[nb_line - 1][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	line_len = ft_strlen(map[i]);
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][line_len - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}
