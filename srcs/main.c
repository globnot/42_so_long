/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:29:22 by aborda            #+#    #+#             */
/*   Updated: 2026/01/21 14:11:50 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	int		fd;
	char	*display;

	fd = open("maps/map_valid.ber", O_RDONLY);
	display = get_next_line(fd);
	ft_printf("%s\n", display);
	return (0);
}
