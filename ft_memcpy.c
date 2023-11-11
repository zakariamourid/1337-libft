/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:19:44 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/10 22:33:23 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dst && !src)
		return (dst);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (n--)
		*d++ = *s++;
	return (dst);
}
