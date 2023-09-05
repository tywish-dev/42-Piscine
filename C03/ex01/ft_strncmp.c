/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:58:06 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/05 23:08:59 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && *s1 == *s2)
		i++;
	return (s1[i] - s2[i]);
}
