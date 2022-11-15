/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:25:06 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/15 14:39:18 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	res = malloc((i + j * sizeof(char)));
	i = -1;
	j = -1;
	while (s1[++i])
		res[i] = s1[i];
	while (s2[++j])
		res[i + j] = s2[j];
	return (res);
}
