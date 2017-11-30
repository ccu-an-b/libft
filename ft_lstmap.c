/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:12:50 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/19 15:01:30 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;
	t_list *tmp;
	t_list *endlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (newlst == NULL || lst == NULL || (*f) == NULL)
		return (NULL);
	newlst = (*f)(lst);
	tmp = newlst;
	lst = lst->next;
	while (lst)
	{
		endlst = (*f)(lst);
		tmp->next = endlst;
		tmp = endlst;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (newlst);
}
