/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:34:26 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/07 15:49:41 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && (i < n))
		i++;
	if (i >= n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int main () {
	char str1[] = "abcdef";
	char str2[] = "abc\375xx";
	int ret;

	ret = ft_strncmp(str1, str2, 5);

	printf("%d", ret);
	
	printf("\n%d", strncmp(str1, str2, 5));

	return(0);
} */