/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:34:34 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/07 17:34:34 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t dstsize)
{
	int		i;
	int		size2;

	i = 0;
	if (dest == '\0' || src == '\0')
	{
		return (0);
	}
	size2 = ft_strlen(src);
	if (size2 >= 1)
	{
		while (src[i] != '\0' && (size2 - 1) > i)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size2);
}
