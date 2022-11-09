/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:44:08 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/09 12:15:02 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

int	strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < size && dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = "/0";
	return (i);
}
