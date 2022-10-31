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

size_t			ft_strlcpy(char *dest, const char *src, size_t dstsize);

size_t			ft_strlcat(char *dest, char *src, size_t size);

int				ft_toupper(int ch);

int				ft_tolower(int ch);

char			*ft_strchr(const char *str, int c);

char			*ft_strrchr(const char *str, int c);

int				ft_strncmp(char *s1, char *s2, size_t n);

void			*ft_memchr(const void *str, int c, size_t n);

int				ft_memcmp(const void *str1, const void *str2, size_t n);

char			*ft_strnstr(char *str, char *to_find, size_t len);

int				ft_atoi(const char *str);

void			*ft_calloc(size_t nitems, size_t size);

char			*ft_strdup(char *src);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s1, char const *set);

// ft_split

char			*ft_itoa(int n);

// ft_strmapi

// ft_striteri

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *s, int fd);

void			ft_putendl_fd(char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

#endif
