/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <zmourid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:18:30 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/17 19:32:42 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	count_words(char const *s, char c)
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
static int	word_len(char const *s,char c)
{
	int	i;
	i = 0;
	while(s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		word;
	int		i;
	char	**str;

	len = count_words(s, c);
	i = 0;
	str = (char **)malloc(sizeof(char *) * (len+ 1));
	if(!str)
		return (NULL);
	word = 0;
	while (word < len)
	{
		while(s[i] == c && s[i])
			i++;
		str[word] = ft_substr(s,i,word_len(&s[i],c));
		while(s[i] != c && s[i])
			i++;
		word++;
	}
	return (str);
}
/*
int	main(int ac,char **av)
{
	int i =0;
	char **spl=(char **)ft_split(av[1],av[2][0] );
	while( spl[i])
	{
		printf(" %d = %s \n",i,spl[i]);
		i++;
	}
}
*/
