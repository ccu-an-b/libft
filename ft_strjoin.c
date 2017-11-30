/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:25:16 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 10:33:53 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char*)malloc(sizeof(char) * len + 1);
	if (new)
	{
		while (i < len)
		{
			if (i < ft_strlen(s1))
				new[i] = s1[i];
			else
				new[i] = s2[i - ft_strlen(s1)];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
