/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:40:03 by rode-alb          #+#    #+#             */
/*   Updated: 2022/11/07 18:41:39 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Params:
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Desc: Adds the node ’new’ at the end of the list. */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_place;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last_place = ft_lstlast(*(lst));
			last_place -> next = new;
		}
	}
}
