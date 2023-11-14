/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:30:26 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/14 22:36:56 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return (NULL);
	while(lst)
	{
		if(lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
}
