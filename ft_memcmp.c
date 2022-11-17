/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:08:06 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/17 18:38:40 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n && ((unsigned char *) s1)[i]
		== ((unsigned char *) s2)[i] && ((unsigned char *)s1)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
