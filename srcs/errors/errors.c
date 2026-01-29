/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:22:32 by aborda            #+#    #+#             */
/*   Updated: 2026/01/29 12:42:50 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	err_msg(int err_code)
{
	if (err_code == ERR_OK)
		ft_putstr_fd("OK\n", 2);
	else if (err_code == ERR_MALLOC)
		ft_putstr_fd("Error : malloc failed\n", 2);
	else if (err_code == ERR_MAP_ELEMENTS)
		ft_putstr_fd("Error : parsing map elements failed\n", 2);
	else if (err_code == ERR_MAP_FORMAT)
		ft_putstr_fd("Error : parsing map format failed\n", 2);
	else if (err_code == ERR_INIT_S_MAP)
		ft_putstr_fd("Error : init s_map failed\n", 2);
	return (err_code);
}
