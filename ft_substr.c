/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:23:17 by saichaou          #+#    #+#             */
/*   Updated: 2022/12/02 13:24:05 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	ptr = malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (start < len + j && s[start])
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	char * s = ft_substr("tripouille", 0, 42000);
	ft_substr(s, strlen("tripouille") + 1);
}
