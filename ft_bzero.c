/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:14:25 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/26 00:14:25 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void bzero(void *s, size_t n)
{
	char	*str;

	str = (void *)s;
	while (n > 0)
	{
		*(ptr) = 0;
		ptr++;
		n--;
	}
	return (0);
}

// I didnt test this main so i have to do this at 42 