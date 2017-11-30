/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:06:14 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/14 12:05:11 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict dst, char const *restrict src)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[size + i] = src[i];
		i++;
	}
	dst[size + i] = '\0';
	return (dst);
}
