/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:17:34 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/15 14:59:56 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
		i++;
	ptr = malloc(i * sizeof(char));
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
