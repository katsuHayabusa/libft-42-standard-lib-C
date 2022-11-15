/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:29:06 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:07 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;
	int	i;

	index = 0;
	while (s[i])
	{
		if (s[i] == c)
			index = i;
		i++;
	}
	return ((char *)&s[index]);
}
