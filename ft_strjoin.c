/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:52:18 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/28 14:52:18 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	str = (char *)malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
	{
		return (0);
	}
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		str[i] = s2[k];
		i++;
		k++;
	}
	str[i] = '\0';
	return (str);
}
