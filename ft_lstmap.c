/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 10:59:28 by axelgerv          #+#    #+#             */
/*   Updated: 2018/12/04 17:37:19 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*li;

	if (!lst || !f)
		return (NULL);
	li = (*f)(lst);
	begin = li;
	lst = lst->next;
	while (lst)
	{
		while (li->next)
			li = li->next;
		li->next = (*f)(lst);
		li = li->next;
		lst = lst->next;
	}
	return (begin);
}
