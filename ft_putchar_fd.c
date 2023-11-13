/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:46:19 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/13 15:49:42 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


int main()
{
	int fd = open("test2",O_WRONLY);
	ft_putchar_fd('d',fd);
	printf("hello = %d \n",fd);
	while(1);
}
