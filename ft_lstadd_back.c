/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:37:37 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/14 22:52:27 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst,t_list *new)
{
	if(!lst || !new)
		return ;
	if(!*lst)
	{
		*lst = new;
		return ;
	}
	*lst = ft_lstlast(*lst);
	**lst->next = new;
}
