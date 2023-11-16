/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:39:23 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/16 20:56:51 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	if(!lst || !del)
		return ;
	while(*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst,del);
		*lst = temp;
	}
	lst = NULL;
}

