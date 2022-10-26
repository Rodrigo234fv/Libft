/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:29:48 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/26 18:19:03 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		i;
	int			a;
	int			b;
	char		*s1;
	char		*s2;

	i = 0;
	s1 = (void *)str1;
	s2 = (void *)str2;
	if (n != 0)
	{
		a = s1[i];
		b = s2[i];
	}
	while (s1[i] != '\0' && (s1[i] == s2[i]) && (n > i + 1))
	{
		i++;
		a = s1[i];
		b = s2[i];
	}
	return (a - b);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
} */