/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:29:59 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/07 00:34:21 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s_len;
	char	*data;

	s_len = ft_strlen(s1);
	data = malloc(s_len + 1);
	if (!data)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memcpy(data, s1, s_len + 1);
	return (data);
}
