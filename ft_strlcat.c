/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:53:54 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 19:45:17 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		w1;
	size_t		w2;

	i = 0;
	w1 = ft_strlen(dest);
	w2 = ft_strlen(src);
	if (size <= w1)
	{
		return (w2 + size);
	}
	while (src[i] != '\0' && (w1 + i < size - 1))
	{
		dest[w1 + i] = src[i];
		i++;
	}
	dest[w1 + i] = '\0';
	return (w1 + w2);
}

/* #include <stdio.h> 
#include <string.h> 
 
int main() { 
    char *s = "hello duplicates"; 
    char target[128] = "target buffer#"; 
     
    printf("Hello World: \"%s\"\n", target); 
    ft_strlcat(target, s, sizeof(target)); 
    printf("New target: \"%s\"\n", target); 
 
    return 0;
} */