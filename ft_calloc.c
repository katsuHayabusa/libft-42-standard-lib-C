/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:47:45 by saichaou          #+#    #+#             */
/*   Updated: 2022/12/25 16:09:05 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void	*ptr;
	size_t	j;

	j = size * nmemb;
	if (j && nmemb != j / size)
		return (NULL);
	ptr = malloc(j);
	if (!size)
		return ((void *) 0);
    ft_bzero(ptr, j);
    return (ptr);
}
