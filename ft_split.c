/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:54:40 by saichaou          #+#    #+#             */
/*   Updated: 2022/12/13 15:12:17 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	while (s[j])
	{
		if (s[i] == c)
			i++;
		s++;
	}
	return (i);
}

size_t  charcount(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] && s[i] != c)
    {
      i++;
    }
    return (i);
}

char	*char_split(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(charcount(s,c) + 1);
	if (!str)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	
	split = malloc(wcount(s, c) + 1);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			

		}
	}
}
