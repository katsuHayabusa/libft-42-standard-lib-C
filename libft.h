/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:50:57 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/17 13:13:29 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

/* mem */

void	ft_bzero(void *mem, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t size);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);

/* char */

int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isprint(char c);
int	ft_isdigit(char c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isascii(unsigned char c);

/* string */

int	ft_atoi(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	strlcat(char *dst, const char *src, size_t size);
int	strlcpy(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int	ft_strlen(char *str);

#endif
