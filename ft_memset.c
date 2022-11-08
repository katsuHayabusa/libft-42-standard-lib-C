/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:03:05 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/08 14:25:32 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
		size_t i;

		i = 0;
		while (i < n)
		{
			((unsigned char *)s)[i] = (unsigned char) c;
			i++;
		}
		return (s);
}
