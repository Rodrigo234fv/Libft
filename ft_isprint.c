/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:29:31 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/25 11:29:31 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isprint(int arg)
{

	if (arg <= 31 || arg == 127)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/* #include <stdio.h>
int main()
{
	char c;

	c = '\n';
	printf("Result %c to is passed to is print: %d", c, ft_isprint(c));
} */
