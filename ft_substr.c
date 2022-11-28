/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:23:17 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/28 15:45:32 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = start;
	ptr = malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (start < len + j && s[start])
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	if (ft_strlen(ptr) == len)
		return (ptr);
	free(ptr);
	return (NULL);
}
