/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:34:10 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 11:45:22 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (s == NULL || (*f) == NULL)
		return (NULL);
	new = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new != NULL)
	{
		while (s[i] != '\0')
		{
			new[i] = (*f)(i, s[i]);
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
