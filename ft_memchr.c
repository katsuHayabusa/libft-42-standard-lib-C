/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:56:01 by saichaou          #+#    #+#             */
/*   Updated: 2022/12/04 14:02:37 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t	i;

	if (!s || size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (((char *) s)[i] == (unsigned char) c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
