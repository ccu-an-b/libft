/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:53:40 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 14:38:09 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *big, char const *little)
{
	char	*res;
	char	*temp;
	int		i;

	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (*big != '\0' && ft_strlen(little) <= ft_strlen(big))
	{
		if (*big == *little)
		{
			res = (char*)big;
			temp = (char*)little;
			i = 0;
			while (res[i] == *temp)
			{
				temp++;
				i++;
				if (*temp == '\0')
					return (res);
			}
		}
		big++;
	}
	return (0);
}
