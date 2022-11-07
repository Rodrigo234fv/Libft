/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:59:50 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 21:22:17 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str || !len || (start >= ft_strlen(s)))
		return (NULL);
	while (s[i] != s[start])
		i++;
	while (len > j && s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

/* #include <stdio.h>
int main()
{
	char str[] =  "Abacaxi";
	printf("%s", ft_substr( str, 0, 10));
} */