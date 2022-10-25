/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:25:46 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/07 17:25:46 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void		    *ft_memset(void *b, int c, size_t len);

size_t			ft_strlen(const char *s);

char			*ft_strlcpy(char *dest, char *src);

char			*ft_strdup(char *src);

#endif