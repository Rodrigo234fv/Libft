/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:29:31 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 17:11:41 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	return (arg >= 32 && arg < 127);
}

/* #include <stdio.h>
int main()
{
	char c;

	c = 'b';
	printf("Result %c to is passed to is print: %d", c, ft_isprint(c));
} */
