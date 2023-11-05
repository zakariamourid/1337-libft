/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <zmourid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:25:23 by zmourid           #+#    #+#             */
/*   Updated: 2023/11/05 15:30:08 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
