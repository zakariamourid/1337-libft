/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:10:59 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/07 00:22:47 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*data;

	data = (unsigned char *)malloc(count * size);
	if (!data)
	{
		errno = ENOENT;
		return (NULL);
	}
	ft_bzero(data, count * size);
	return (data);
}
