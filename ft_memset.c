/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:23:12 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/14 15:53:00 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *temp;

	temp = (unsigned char*)b;
	while (len > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		len--;
	}
	return (b);
}
