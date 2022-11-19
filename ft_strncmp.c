/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:15:04 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/19 14:46:06 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0 || *s2 == '\0')
			return (0);
	i = 0;
	while (s1[i] && i < (unsigned int) n && s1[i] == s2[i])
			i++;
	return (s1[i] - s2[i]);
}
