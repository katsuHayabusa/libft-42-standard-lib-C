/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:56:01 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/13 11:37:57 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	int	i;

	i = 0;
	while (i < size && ((unsigned char *)s)[i] != (unsigned char) c)
		i++;
	return ((void *) s + i);
}
