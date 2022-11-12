/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:47:45 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/12 19:16:02 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
		return(NULL);
	void	*ptr = malloc(nmemb * size);
	int	i;

	i = -1;
	while (++i < nmemb)
		((char *)ptr)[i] = '0';
	return (ptr);
}
