/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:56:01 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/17 18:34:19 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		if (*((unsigned char *) s) == (unsigned char) c)
			return ((unsigned char *)s);
		s++;
		i++;
	}
	return (NULL);
}
