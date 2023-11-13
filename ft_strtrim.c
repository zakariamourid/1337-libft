/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:45:14 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/11 21:14:53 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t start;
    size_t end;
    size_t s_len;

	if( !*s1)
		return ft_strdup("");
	if(!*set)
		return ft_strdup(s1);
    s_len = ft_strlen(s1);
    end = s_len - 1;
    start = 0;
    while(s1[start] && ft_strchr(set,s1[start]))
      start++;
    while(s1[end] && ft_strchr(set,s1[end]))
      end--;
    str = malloc(sizeof(char) * (end - start +2));
    if(!str)
      return NULL;
	strlcpy(str,s1 + start,end - start + 2);
    return (char *) str;
}

