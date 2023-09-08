/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:45:43 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/07 16:04:53 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (temp);
}
