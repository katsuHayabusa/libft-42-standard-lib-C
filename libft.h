/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:50:57 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/09 16:23:40 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/* mem */

void	bzero(void *mem, size_t size);
void	*ft_memset(void *s, int c, size_t n);

/* char */

int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isprint(char c);
int	ft_isdigit(char c);
int	ft_tolower(int c);
int	ft_toupper(int c);
#endif
