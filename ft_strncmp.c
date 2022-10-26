/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:34:26 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/26 17:46:25 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t		i;
	int			a;
	int			b;

	i = 0;
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

   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
} */