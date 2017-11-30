/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:14:09 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/17 14:34:16 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*new;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (j != i && (s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n'))
		j--;
	len = j - i;
	if (i == j)
	{
		new = (char*)malloc(sizeof(char) * len + 1);
		new[len] = '\0';
		return (new);
	}
	return (ft_strsub(s, i, len));
}
