/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:56:32 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/07 17:33:41 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *f, size_t len)
{
	size_t		n;
	size_t		a;

	n = 0;
	a = 0;
	if (((char *)f)[a] == '\0')
		return ((char *)str);
	if (!len)
		return (0);
	while (((char *)str)[n] && n < len)
	{
		a = 0;
		while (((char *)str)[n + a] == ((char *)f)[a] && \
		((char *)f)[a] && (n + a) < len)
			a++;
		if (((char *)f)[a] == '\0')
			return (((char *)str) + (n));
		n++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *searchingFor = "stack";
	char *in = "bumbaaaa stack llumba";
    printf("found: %s\n", ft_strnstr(in, searchingFor, 30) ? "yes" : "no");
    printf("found: %s\n", ft_strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", ft_strnstr(in, searchingFor, 15) ? "yes" : "no");
    return 0;
} */