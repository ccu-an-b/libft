/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:20:58 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 14:14:13 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *p;

	p = NULL;
	if (c == '\0')
		p = (char*)(s + ft_strlen(s));
	else
	{
		while (*s != '\0')
		{
			if (*s == c)
			{
				p = (char*)s;
				return (p);
			}
			s++;
		}
	}
	return (p);
}
