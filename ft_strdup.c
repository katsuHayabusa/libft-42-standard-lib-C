/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:17:34 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/12 19:25:07 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*ptr;

	i = 0;
	while (s[i])
		i++;
	ptr = malloc (sizeof(char) * i);
	while (i > 0)
	{
		ptr[i] = s[i];
		i--;
	}
	return (ptr);
}
