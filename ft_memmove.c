/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:20:11 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 19:52:07 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		nb;

	nb = n;
	if (dest > src)
	{
		while (nb--)
			((char *)dest)[nb] = ((char *)src)[nb];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http:/fdgsfdgsdfg/www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Helogsdfhsfdsdfooo!!");
   printf("Before memmove dest = %s\n", dest);
   memmove(dest, src, strlen(src)+1);
   printf("After memmove dest = %s\n", dest);
   
   return(0);
}
 */