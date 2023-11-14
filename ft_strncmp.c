/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:51:27 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/14 20:53:28 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1,const char *s2, size_t n)
{
	size_t i;
	
	i = 0;
	while((s1[i] && s2[i]) || i < n)
	{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return  0;
}
