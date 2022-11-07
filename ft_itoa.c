/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:45:30 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/07 18:05:31 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lenght(int nb)
{
	int		lenght;

	lenght = 0;
	if (nb <= 0)
	{
		lenght++;
	}
	while (nb)
	{
		nb /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	long			nb;

	len = lenght(n);
	nb = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = 48;
	str[len--] = '\0';
	while (nb)
	{
		str[len--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}

/* #include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(0));
} */