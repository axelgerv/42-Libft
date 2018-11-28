/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:33:48 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/27 17:11:04 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	size++;
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (size--)
		str[size] = 0;
	return (str);
}
