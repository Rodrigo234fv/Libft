/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:16:03 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 19:44:36 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(const char *str, char c)
{
	int		i;
	int		n_words;

	i = 0;
	n_words = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			n_words++;
			while (str[i] && str[i] != c)
				i++;
		}
		if (str[i] != '\0')
		{
			i++;
		}
	}
	return (n_words);
}

char	*word_maker(char const *str, int a, int z)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (z - a + 1));
	while (z > a)
	{
		word[i] = str[a];
		i++;
		a++;
	}	
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		pos;
	char	**split;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (counter(s, c) + 1));
	if (!s || !split)
		return (NULL);
	pos = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && pos < 0)
			pos = i;
		else if ((s[i] == c || i == ft_strlen(s)) && pos >= 0)
		{
			split[j] = word_maker(s, pos, i);
			j++;
			pos = -1;
		}
		i++;
	}
	split[j] = '\0';
	return (split);
}

/* int		main(void)
{
	char	**tab;
	int	i;

	i = 0;
	tab = ft_split("    ft_split    splits   spaces   for   me  !", ' ');
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
} */