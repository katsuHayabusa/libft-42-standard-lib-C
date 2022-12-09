/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:54:40 by saichaou          #+#    #+#             */
/*   Updated: 2022/12/09 14:51:10 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wcount(char const *s, char c)
{
	size_t	i;

	i = 1;
	while (s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

size_t	charcount(char const *s, char c)
{
	int	i;

	i = 0;
	while (s && *s == c)
		i++;
	return (i);
}


char	**split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	split = malloc(wcount(s, c) * sizeof(char *));
	if (!split)
		return (NULL);
	split[0] = malloc(charcount(char const *s, c));
	while (s)
}
