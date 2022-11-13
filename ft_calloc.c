/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:47:45 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/13 11:30:13 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int	i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	*ptr = malloc(nmemb * size);
	i = -1;
	while (++i < nmemb)
		((char *)ptr)[i] = '0';
	return (ptr);
}
