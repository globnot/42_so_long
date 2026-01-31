/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:10:42 by aborda            #+#    #+#             */
/*   Updated: 2026/01/31 09:36:02 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid_map(t_map *map)
{
	if (!check_valid_chars(map))
		return (err_msg(ERR_MAP_ELEMENTS));
	if (!contain_element(map, 'E'))
		return (err_msg(ERR_MAP_ELEMENTS));
	if (!contain_element(map, 'P'))
		return (err_msg(ERR_MAP_ELEMENTS));
	if (!contain_element(map, 'C'))
		return (err_msg(ERR_MAP_ELEMENTS));
	if (!is_rectangular(map))
		return (err_msg(ERR_MAP_FORMAT));
	if (!is_closed_by_walls(map))
		return (err_msg(ERR_MAP_FORMAT));
	if (!check_path(map))
		return (err_msg(ERR_CHECK_PATH));
	return (0);
}
