/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:48:39 by saichaou          #+#    #+#             */
/*   Updated: 2022/12/01 14:33:07 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *) big);
	if (len == 0)
		return (NULL);
	i = 0;
	if (len < 0)
			len = ft_strlen((char *) big);
	while (big[i] && i < len)
	{
		if (big[i] == *little)
		{
			j = 0;
			while (big[i + j] == little[j] && little[j] && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
