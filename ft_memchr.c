/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:07:30 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/14 15:55:44 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char*)s;
	while (i < n)
	{
		if (*temp == (unsigned char)c)
			return (temp);
		temp++;
		i++;
	}
	return (NULL);
}
