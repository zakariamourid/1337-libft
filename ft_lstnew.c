/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:04:48 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/14 22:16:59 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstew(void *content)
{
	t_list *new;

	new = (t_list *) malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	retunr new;
}
