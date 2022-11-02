/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:34:34 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 19:45:24 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		size2;

	i = 0;
	size2 = ft_strlen(src);
	if (dstsize > 0)
	{
		while (src[i] && (dstsize - 1) > i)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size2);
}
/* 
#include <stdio.h>
#include <string.h>

int main()
{
   char var1[6] = "stuff";
   char var2[7] = "world!";
   ft_strlcpy(var1, var2, sizeof(var2));
   printf("hello %s", var1);
} */