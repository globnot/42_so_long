/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_s_flood.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:50:29 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 14:08:19 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_flood	*init_s_flood(t_map *map)
{
	t_flood	*flood;

	flood = malloc(sizeof(t_flood));
	if (flood == NULL)
		return (NULL);
	if (init_map_copy(map, flood) == NULL)
		return (NULL);
	return (flood);
}
