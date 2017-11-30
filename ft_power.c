/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:22:23 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/17 16:24:07 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, int power)
{
	int res;

	if (power < 0)
		res = 0;
	else if (power == 0)
		res = 1;
	else
		res = nb * ft_power(nb, (power - 1));
	return (res);
}
