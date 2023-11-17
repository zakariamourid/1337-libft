/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:59:13 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/17 18:38:59 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *new;
	if(!lst || !f || !del)
		return (NULL);
	head = (t_list *) malloc(sizeof(t_list) * ft_lstsize(lst));
	if(!head)
		return (NULL);
	while(lst)
	{
		new = (t_list *) malloc(sizeof(t_list));
		if(!new)
		{
			ft_lstclear(&head,del);
			return (NULL);
		}
		new->content = (*f)(lst->content);
		ft_lstadd_back(&head,new);
		lst = lst->next;
	}
	return head;
}
