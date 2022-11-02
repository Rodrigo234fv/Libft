/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:10:01 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/02 16:46:49 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new -> next = *lst;
	*lst = new;
}

/* Adds the node ’new’ at the beginning of the list.

lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list. */