/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:53:40 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 16:13:10 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t n)
{
	char	*res;
	char	*temp;
	size_t	i;

	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (n && ft_strlen(little) <= ft_strlen(big) && n >= ft_strlen(little))
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
		n--;
	}
	return (NULL);
}
