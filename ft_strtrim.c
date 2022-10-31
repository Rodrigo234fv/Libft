/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:10:04 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/28 15:10:04 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		a;
	size_t		z;

	i = 0;
	a = 0;
	z = ft_strlen(s1);
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[a] && ft_strchr(set, s1[a]))
	{
		a++;
	}
	while (s1[z - 1] && ft_strchr(set, s1[z - 1]) && z > a)
	{
		z--;
	}
	str = (char *)malloc(sizeof(char) * (z - a + 1));
	while(z > a)
	{
		str[i] = s1[a];
		i++;
		a++;
	}

	return (str);
}
/* 
#include <stdio.h> 

int main()
{
	char *str;

	str = ft_strtrim("abcabcBanana", "abc");

	printf("%s\n", str);
	printf("%s\n", ft_strtrim("xavocadzzz", "xyz"));
	
} */