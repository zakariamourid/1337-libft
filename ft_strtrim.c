/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:45:14 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/11 18:09:25 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	char *start;
	char *end;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(s1[i])
	{
		j = 0;
		while(set[j])
		{
			if(set[j] == s1[i+j])
				start++;
			j++;
		}
		i++;
	}
	return start + s1;

}
