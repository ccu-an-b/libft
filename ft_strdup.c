/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:34:59 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/19 15:42:52 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	char *cpy;

	cpy = NULL;
	cpy = (char*)malloc(sizeof(*cpy) * ft_strlen(src) + 1);
	if (cpy != NULL)
		ft_strcpy(cpy, src);
	return (cpy);
}
