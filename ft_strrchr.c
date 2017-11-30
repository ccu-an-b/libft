/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:20:58 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/13 10:50:09 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	int		j;

	j = 0;
	p = NULL;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			while (j < i)
			{
				s++;
				j++;
			}
			p = (char*)s;
			return (p);
		}
		i--;
	}
	return (p);
}
