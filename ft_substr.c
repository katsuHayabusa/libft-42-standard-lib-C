/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:23:17 by saichaou          #+#    #+#             */
/*   Updated: 2022/12/04 13:31:38 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	sizestr(char const *s, size_t len)
{
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	i = 0;
	j = start;
	ptr = malloc(sizestr(s, len) + 1);
	if (!ptr)
		return (NULL);
	while (start < len + j && s[start])
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
