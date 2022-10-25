/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:53:54 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/25 12:53:54 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcpy(char *dest, char *src, size_t size)
{
	int		i;
	int		w1;
	int		w2;

	i = 0;
	w1 = ft_strlen(dest);
	w2 = ft_strlen(src);
	if (size < w1)
	{
		return (w2 + size);
	}
	while (w1 + i < size - 1)
	{
		dest[w1 + i] = src[i];
		i++;
	}
	dest[w1 + i] = '\0';
	return (w1 + w2);
}