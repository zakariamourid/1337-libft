/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:55:40 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/13 23:02:49 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s,void(*f)(unsigned int,char *))
{
	size_t	i;
	if(!s || !f)
		return ;
	while(str[i])
	{
		str[i] = (*f)(i,str);
		i++;
	}
}
