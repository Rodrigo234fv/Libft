/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:56:32 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/25 11:56:32 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(char *str, char *to_find, size_t len)
{
	int n;
    int a;

    n = 0;
    a = a;
    if (to_find[a] == '\0')
    {
        return (str);
    }
    while (str[n] != '\0' || len > n)
    {
        a = 0;
        while (str[n] && str[n++] == to_find[a++])
        {
            if (to_find[a] == '\0')
            {
                return (&str[n - a]);
            }
        }
    }
    return (0);
}
