/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:15:04 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/19 15:39:53 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && i < (unsigned int) n - 1 && s1[i] == s2[i])
			i++;
	if (s1[i] < 0)
		return ((s1[i] * -1) - s2[i]);
	return (s1[i] - s2[i]);
}
