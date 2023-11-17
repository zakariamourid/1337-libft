/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:10:59 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/17 14:03:56 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*data;
	if (count > SIZE_MAX/size) 
		return (NULL);
	data = (unsigned char *)malloc(count * size);
	if (!data)
		return (NULL);
	ft_bzero(data, count * size);
	return (data);
}
