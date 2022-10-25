/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:43:42 by marvin            #+#    #+#             */
/*   Updated: 2022/10/07 16:43:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    if(!s)
    {
        return(0);
    }
    i = 0;
    while (i < n)
    {
        *(unsigned char*)(s + i) = (unsigned char) c;
        i++;
    }
    return (s);
}