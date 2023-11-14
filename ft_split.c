/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <zmourid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:18:30 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/14 16:47:29 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (count);
}

int	*ft_split(char const *s, char c)
{
	int		len;
	char	**str;

	len = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (len+ 1));
	if(!str)
		return (NULL);
	printf(" len = %d \n ", len);
	while (*str == c)
		str++;
	while (*str)
	{
		
	}
	return (NULL);
}
int	main(void)
{
	char	str[];

	str[] = "hello,world";
	ft_split(str, ',');
}
