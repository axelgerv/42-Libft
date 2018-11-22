/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:36:29 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/22 12:21:36 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	size_t	size;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		size--;
	}
	if (!s[i])
		return (ft_strdup(""));
	len = ft_strlen(s) - 1;
	while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && len > 0)
	{
		len--;
		size--;
	}
	if (size == ft_strlen(s))
		return (ft_strdup(s));
	return (ft_strsub(s, i, size));
}
