/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:54:39 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/19 13:42:19 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char		*ft_filltab(int n, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char*)malloc(sizeof(char) * len + 1);
	if (new)
	{
		if (n < 0)
		{
			new[0] = '-';
			n = -n;
			i++;
		}
		while (i < len - 1)
		{
			new[i] = (n / ft_power(10, len - i - 1)) + 48;
			n = n - (n / ft_power(10, len - i - 1)) * ft_power(10, len - i - 1);
			i++;
		}
		new[len - 1] = n % 10 + 48;
		new[len] = '\0';
	}
	return (new);
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*new;

	len = 1;
	if (n == -2147483648)
	{
		new = ft_strsub("-2147483648", 0, 11);
		return (new);
	}
	len = ft_nbrlen(n);
	new = ft_filltab(n, len);
	return (new);
}
