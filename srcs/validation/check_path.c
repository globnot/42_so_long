/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:13:32 by aborda            #+#    #+#             */
/*   Updated: 2026/01/30 12:13:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_path(t_map *map)
{
	t_flood	*flood;

	flood = init_s_flood(map);
	if (flood == NULL)
		return (err_msg(ERR_INIT_S_FLOOD), 0);
	flood_fill(flood, flood->player_pos_x, flood->player_pos_y);
	if (flood->found_collectible == flood->nb_collectible
		&& flood->found_exit == 1)
		return (free_flood(flood), 1);
	return (free_flood(flood), 0);
}
