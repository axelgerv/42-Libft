/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:01:58 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/15 12:02:18 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	while (s[len] != (char)c && len >= 0)
	{
		if (len == 0)
			return (NULL);
		len--;
	}
	return (((char *)s) + len);
}
