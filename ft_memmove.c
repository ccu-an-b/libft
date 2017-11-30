/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:57:49 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/17 14:46:52 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	temp[len];

	if (len < 128 * 1024 * 1024)
	{
		ft_memcpy(temp, src, len);
		ft_memcpy(dst, temp, len);
	}
	return (dst);
}
