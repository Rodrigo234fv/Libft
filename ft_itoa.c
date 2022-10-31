/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:45:30 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/28 16:45:30 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenght(int nb)
{
	int		lenght;

	lenght = 0;
	if (nb == 0)
	{
		lenght++;
		return (lenght);
	}
	if (nb < 0)
	{
		nb = -nb;
		lenght++;
	}
	while (nb > 0)
	{
		nb /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				nb;
	int				i;

	nb = n;
	i = lenght(nb);
	if(!(str = malloc((i + 1) * sizeof(str))))
	{
		return (0);
	}
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(-2147483647));
}