/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:01:52 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/11/17 18:23:45 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextlst;
	t_list	*lst;

	lst = *alst;
	while (lst != NULL)
	{
		nextlst = lst->next;
		(*del)(lst->content, lst->content_size);
		free(lst);
		lst = nextlst;
	}
	*alst = NULL;
}
