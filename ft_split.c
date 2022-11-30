/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:54:40 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/30 03:59:31 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wcount(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] == c)
			j ++;
		i++;
	}
	return (j);
}

size_t	ccount(char const *s, char c, int index)
{
	int	i;

	i = index;
	while (s[i] && s[i] != c)
		i++;
	return (i - index);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	int		k;
	char	**split;

	i = 0;
	j = 0;
	k = 0;
	split = malloc(wcount(s,c) * sizeof(char) + 1);
	if (!split)
		return (NULL);
	while(s[i])
	{
		split[j] = malloc(ccount(s,c,i) * sizeof(i));
		if (s[i] == c)
		{
			j++;
        	split[j] = malloc(ccount(s,c,i) * sizeof(i));
			k = 0;
		}
		split[j][k] = s[i];
		i++;
		k++;
	}
	return (split);
}
