/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 01:50:27 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/19 14:44:48 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(*arr) * (max - min));
	if (arr == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < max - min)
		{
			arr[i] = min + i;
			i++;
		}
		*range = arr;
		return (i);
	}
}
