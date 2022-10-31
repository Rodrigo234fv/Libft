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

size_t			ft_strlen(const char *s);

char	*ft_strchr(const char *str, int c);

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		a;
	size_t		z;

	str = '\0';
	a = 0;
	z = ft_strlen(s1);
	if (!s1 || !set)
	{
		return (0);
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
	if(str)
		ft_strlcpy(str, &s1[a], z - a + 1);
	return (str);
}

#include <stdio.h> 

int main()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return 0;
}