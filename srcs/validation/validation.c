/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:10:42 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 10:13:24 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid_map(t_map *map)
{
	if (!contain_exit(map))
		return (0);
	if (!contain_start(map))
		return (0);
	if (!contain_collectible(map))
		return (0);
	if (!is_rectangular(map))
		return (0);
	if (!is_closed_by_walls(map))
		return (0);
	return (1);
}
