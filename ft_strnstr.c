/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:56:32 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/26 18:10:57 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t		n;
	size_t		a;

	n = 0;
	a = 0;
	if (to_find[a] == '\0')
	{
		return (str);
	}
	while (str[n] != '\0' && len > n)
	{
		a = 0;
		while (str[n] && str[n++] == to_find[a++])
		{
			if (to_find[a] == '\0')
			{
				return (&str[n - a]);
			}
		}
	}
	return (0);
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