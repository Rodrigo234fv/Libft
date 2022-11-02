/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:00:47 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 15:00:47 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Desc: Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
 */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
