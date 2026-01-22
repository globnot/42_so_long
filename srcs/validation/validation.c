/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:10:42 by aborda            #+#    #+#             */
/*   Updated: 2026/01/22 11:42:35 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	contain_exit(char **map)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'E')
			{
				j++;
				count++;
			}
			else
				j++;
		}
		i++;
	}
	if (count == 1)
		return (1);
	return (0);
}

int	contain_start(char **map)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				j++;
				count++;
			}
			else
				j++;
		}
		i++;
	}
	if (count == 1)
		return (1);
	return (0);
}
