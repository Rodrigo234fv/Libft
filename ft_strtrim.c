/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:10:04 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/31 17:47:19 by rode-alb         ###   ########.fr       */
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
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	while (s1[z - 1] && ft_strchr(set, s1[z - 1]) && z > a) // Tirar first arg maybe
		z--;
	str = (char *)malloc(sizeof(*s1) * (z - a + 1));
	if (!str)
		return (NULL);
	while (a < z)
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