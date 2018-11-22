/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:28:12 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/22 13:05:15 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstk, const char *ndle, size_t len)
{
	int i;
	int j;

	i = 0;
	if (ndle[0] == '\0')
		return ((char *)hstk);
	while (hstk[i] && (size_t)i < len)
	{
		j = 0;
		while (hstk[i + j] == ndle[j] && hstk[i + j] &&
				ndle[j] && ((size_t)(i + j)) < len)
		{
			j++;
			if (ndle[j] == '\0')
				return (((char *)hstk) + i);
		}
		i++;
	}
	return (NULL);
}
