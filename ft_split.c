/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:16:03 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/28 16:16:03 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h" */

int		counter(const char *str, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while(str[i] != '\0')
	{
		while(str[i] == c)
			words++;  // I dont know if I put this or not 
			str++;
		if (*str)
			words++;
		while(str[i] != '\0' && str[i] != c)
			str++;
	}
	return (words);
}

#include <stdio.h>
int main ()
{
	int s;
	s = counter("BenzBBB", 'B');
	printf("%d\n", s);
}

/* void	word_separation(char **split, char const *s, char cha)
{
	char =			**split_p;
	char const =	*str;

	str = s;
	split_p = split;
	while(str)
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**new_char

	if (!s)
	{
		return (0);
	}
	size = counter(s,c)
	new_char = (char**)malloc (sizeof(char *) * (size + 1));
} */