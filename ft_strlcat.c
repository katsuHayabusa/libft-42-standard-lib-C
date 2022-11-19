/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:53:30 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/19 16:02:17 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (*src == '\0')
		return (ft_strlen(dst));
	i = 0;
	while (dst[i])
		i++;
	j = i - 1;
	i = 0;
	while (i < size - j - 1 && src[i])
	{
	dst[i + j] = src[i];
	i++;
	}
	dst[i] = '\0';
	return (i);
}
