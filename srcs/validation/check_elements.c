/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:43:35 by aborda            #+#    #+#             */
/*   Updated: 2026/01/25 10:11:57 by aborda           ###   ########.fr       */
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

int	contain_collectible(char **map)
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
			if (map[i][j] == 'C')
			{
				j++;
				count++;
			}
			else
				j++;
		}
		i++;
	}
	if (count >= 1)
		return (1);
	return (0);
}
