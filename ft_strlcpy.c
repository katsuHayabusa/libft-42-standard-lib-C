/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:44:08 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/17 18:35:24 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < (int) size - 1 && dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
