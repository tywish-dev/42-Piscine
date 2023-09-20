/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:20:53 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/09/20 15:24:27 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum a_bool
{
	false = 0,
	true = 1
}		t_bool;

# define EVEN(number) (number % 2 == 0)

# define TRUE	true
# define FALSE	false

# define SUCCESS	0

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"

#endif