/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:55:17 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/14 13:52:21 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char const *str)
{
	int i;
	int ntrue;
	int n;

	i = 0;
	n = 0;
	ntrue = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		ntrue = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + ((int)str[i] - '0');
		i++;
	}
	if (ntrue == 1)
		return (-n);
	else
		return (n);
}
