/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:00:26 by saichaou          #+#    #+#             */
/*   Updated: 2022/11/15 14:57:32 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_size(int n)
{
	int	i;

	i = 0;
	while (n > 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == 0)
		return ("0");
	str = malloc(num_size(n) * sizeof(int));
	i = num_size(n) - 1;
	while (n > 10)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	str[i] = n + '0';
	return (str);
}
