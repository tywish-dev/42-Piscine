/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:45:04 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/06 00:17:03 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*found;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			found[j] = to_find[j];
			j++;
		}
		i++;
	}
	return (found);
}
