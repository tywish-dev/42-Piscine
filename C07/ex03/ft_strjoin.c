/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:43:29 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/19 15:13:07 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;	
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	ft_len_with_sep(int size, char **strs, int sep_len)
{
	int	i;
	int	len;

	i = 0;
	len = sep_len * -1;
	while (i < size)
	{
		len = len + sep_len + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;

	if (size <= 0)
	{
		res = (char *)malloc(1 * sizeof(char));
		return (res);
	}
	i = 0;
	len = ft_len_with_sep(size, strs, ft_strlen(sep));
	if ((res = (char *)malloc(len + 1 * sizeof(char))) == NULL)
		return (0);
	while (i < size)
	{
		res = ft_strcpy(res, strs[i]);
		if (i + 1 < size)
			ft_strcpy(res, sep);
	}
	*res = '\0';
	return (res - len);
}
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}