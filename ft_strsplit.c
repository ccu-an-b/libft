/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:47:25 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/19 13:46:19 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wrdlen(char const *s, char c, size_t i)
{
	size_t len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static size_t	ft_tablen(char const *s, char c)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
		}
		else if (s[i] != c)
		{
			len++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * ft_tablen(s, c) + 1);
	if (tab)
	{
		while (i < ft_tablen(s, c))
		{
			while (s[j] == c && s[j] != '\0')
				j++;
			tab[i] = ft_strsub(s, j, ft_wrdlen(s, c, j));
			j = j + ft_wrdlen(s, c, j);
			i++;
		}
		tab[ft_tablen(s, c)] = NULL;
	}
	return (tab);
}
