/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:23:21 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/14 15:37:06 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*temp;
	char	*temp2;
	int		i;

	i = 0;
	temp = (char*)dst;
	temp2 = (char*)src;
	while (i < (int)n)
	{
		*temp = temp2[i];
		temp++;
		i++;
	}
	return (dst);
}
