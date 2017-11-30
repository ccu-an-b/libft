/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:35:02 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/14 17:59:30 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char*)malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	ft_memset(s, 0, size + 1);
	return (s);
}
