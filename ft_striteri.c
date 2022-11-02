/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:22:38 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 17:15:57 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
f(0, ''); 
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/* void ft(unsigned int f, char *str)
{
	str[f] = 'c';
}	

#include <stdio.h>
int main()
{  
	char str[] = "str";
	ft_striteri(str, ft);
	printf("%s\n", str);
} */
