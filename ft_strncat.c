/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:30:11 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/14 12:04:52 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict dst, char const *restrict src, size_t nb)
{
	size_t size;
	size_t i;

	i = 0;
	size = ft_strlen(dst);
	while (src[i] != '\0' && i < nb)
	{
		dst[size + i] = src[i];
		i++;
	}
	dst[size + i] = '\0';
	return (dst);
}
