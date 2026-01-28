/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:10:42 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 23:10:10 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid_map(t_map *map)
{
	if (!contain_element(map, 'E'))
		return (error_msg(ERR_MAP_ELEMENTS));
	if (!contain_element(map, 'P'))
		return (error_msg(ERR_MAP_ELEMENTS));
	if (!contain_element(map, 'C'))
		return (error_msg(ERR_MAP_ELEMENTS));
	if (!is_rectangular(map))
		return (error_msg(ERR_MAP_FORMAT));
	if (!is_closed_by_walls(map))
		return (error_msg(ERR_MAP_FORMAT));
	return (error_msg(ERR_OK));
}
