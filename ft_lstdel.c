/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:12:22 by axelgerv          #+#    #+#             */
/*   Updated: 2018/12/04 17:27:54 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!alst || !del)
		return ;
	else
	{
		while (*alst)
		{
			tmp = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = tmp;
		}
	}
}
