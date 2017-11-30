/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:30:11 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 17:11:39 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, char const *restrict src, size_t size)
{
	size_t i;
	size_t res;
	size_t sum;

	i = 0;
	sum = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		res = ft_strlen(src) + size;
	else
	{
		res = ft_strlen(dst);
		while (src[i] != '\0' && res + i < size)
		{
			dst[res + i] = src[i];
			i++;
		}
		if (sum >= size)
			i--;
		dst[res + i] = '\0';
		res = sum;
	}
	return (res);
}
