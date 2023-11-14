/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:45:14 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/14 16:32:29 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	s_len;

	if (!s1)
		return (NULL);
	if (!*set || *s1 == 0)
		return (ft_strdup(s1));
	s_len = ft_strlen(s1);
	end = s_len - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))    
		start++;
	if(start == s_len)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]))
		end--;
	str = malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	strlcpy(str, s1 + start, end - start + 2);
	return ((char *)str);
}
