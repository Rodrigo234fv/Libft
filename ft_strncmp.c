/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:34:26 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 19:11:01 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && (s1[i] == s2[i]) && (i < n))
		i++;
	if (i >= n)
		return (0);
	return (s2[i] - s1[i]);
}

#include <stdio.h>
#include <string.h>

int main () {
	char str1[] = "test\200";
	char str2[] = "test\0";
	int ret;

	ret = ft_strncmp(str1, str2, 6);

	printf("%d", ret);
	return(0);
}