/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:48:39 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/28 17:34:33 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (len == 0 && !big)
		return (NULL);
	if (!*little)
		return ((char *) big);
	i = 0;
	if ((int) len < 0)
			len = ft_strlen((char *) big);
	while (big[i] && i < (int) len)
	{
		if (big[i] == *little)
		{
			j = 0;
			while (big[i + j] == little[j] && little[j] && i + j < (int) len)
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
