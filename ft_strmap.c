/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:15:10 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 11:41:48 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	if (s == NULL || (*f) == NULL)
		return (NULL);
	new = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new != NULL)
	{
		while (s[i] != '\0')
		{
			new[i] = (*f)(s[i]);
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
