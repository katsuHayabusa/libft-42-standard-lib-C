/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saichaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:22:30 by saichaou          #+#    #+#             */
/*   Updated: 2022/12/12 01:04:39 by saichaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst) -> next;
		ft_lstdelone((*lst), del);
		*lst = tmp;
	}
}
