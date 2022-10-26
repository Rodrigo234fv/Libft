/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:25:46 by rode-alb          #+#    #+#             */
/*   Updated: 2022/10/26 18:34:12 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int				ft_isalpha(int a);

int				ft_isdigit( int arg);

int				ft_isalnum(int b);

int				ft_isascii(int c);

int				ft_isprint(int arg);

size_t			ft_strlen(const char *s);

void			*ft_memset(void *s, int c, size_t n);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memmove(void *str1, const void *str2, size_t n);

size_t			ft_strlcpy(char *dest, char *src, size_t dstsize);

size_t			ft_strlcat(char *dest, char *src, size_t size);

int				ft_toupper(int ch);

int				ft_tolower(int ch);

char			*strchr(const char *str, int c);

char			*ft_strrchr(const char *str, int c);

int				ft_strncmp(char *s1, char *s2, size_t n);

void			*ft_memchr(const void *str, int c, size_t n);

int				ft_memcmp(const void *str1, const void *str2, size_t n);

char			*ft_strnstr(char *str, char *to_find, size_t len);

int				ft_atoi(const char *str);

void			*calloc(size_t nitems, size_t size);

char			*ft_strdup(char *src);

// ft_substr

// ft_strjoin

//ft_strtrim

// ft_split

// ft_itoa

// ft_strmapi

// ft_striteri

// ft_putchar_fd

// ft_putstr_fd

// ft_putendl_fd

// ft_putnbr_fd

#endif
