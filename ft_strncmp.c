/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:05:41 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/16 12:10:13 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	int diff;
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (int)n)
	{
		i++;
	}
	if (i == (int)n)
		i--;
	diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
