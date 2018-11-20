/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:28:12 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/15 14:02:42 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && (size_t)i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] &&
				needle[j] && ((size_t)(i + j)) < len)
		{
			j++;
			if (needle[j] == '\0')
				return (((char *)haystack) + i);
		}
		i++;
	}
	return (NULL);
}
