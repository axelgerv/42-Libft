/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:36:29 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/19 15:54:53 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	size_t	size;

	i = 0;
	if (!s)
		return (NULL);
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
