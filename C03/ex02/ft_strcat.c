/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:11:14 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/05 23:15:09 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		dest_len;
	int		i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}
