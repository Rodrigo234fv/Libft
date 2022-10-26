/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:14:25 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/26 15:55:12 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (void *)s;
	while (n > 0)
	{
		*(str) = 0;
		str++;
		n--;
	}
}

/* #include <stdlib.h>
#include <string.h>

int main( void )
  {
    char buffer[80];

    ft_bzero( buffer, 80 );
    return EXIT_SUCCESS;
  } */