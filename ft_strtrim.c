/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:10:04 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/07 18:16:43 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	int			a;
	int			z;

	a = 0;
	z = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set, s1[a]) && a <= z)
		a++;
	if (a > z)
		return (ft_strdup(s1 + z + 1));
	while (s1[z - 1] && ft_strchr(set, s1[z]) && z >= 0)
		z--;
	str = (char *)malloc(sizeof(*s1) * (z - a + 2));
	if (!str)
		return (NULL);
	ft_strlcpy (str, &s1[a], z - a + 2);
	return (str);
}

/* #include <stdio.h> 

int main()
{
	char *str;

	str = ft_strtrim("abcabcBanana", "abc");

	printf("%s\n", str);
	printf("%s\n", ft_strtrim("xavocadzzz", "xyz"));
	
} */