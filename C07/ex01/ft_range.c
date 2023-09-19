/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 01:43:05 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/19 14:35:49 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	r;
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	r = max - min;
	if (r <= 0)
		return (0);
	i = 0;
	arr = malloc(sizeof(int) * r);
	while (r > i)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
