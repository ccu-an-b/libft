/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:31:03 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/19 14:29:55 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp != NULL)
	{
		if (content == NULL)
		{
			tmp->content_size = 0;
			tmp->content = NULL;
		}
		else
		{
			tmp->content = (t_list *)malloc(sizeof(t_list) * content_size);
			if (tmp->content == NULL)
			{
				free(tmp);
				return (NULL);
			}
			ft_memcpy(tmp->content, content, content_size);
			tmp->content_size = content_size;
		}
		tmp->next = NULL;
	}
	return (tmp);
}
