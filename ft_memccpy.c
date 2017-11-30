/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 09:37:01 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 13:06:43 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
			size_t n)
{
	unsigned char	*temp;
	unsigned char	*temp2;
	size_t			i;

	i = 0;
	temp = (unsigned char*)dst;
	temp2 = (unsigned char*)src;
	while (i < n)
	{
		temp[i] = temp2[i];
		if (temp2[i] == (unsigned char)c)
			return (dst + 1 + i);
		i++;
	}
	return (NULL);
}
