/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:42:37 by axelgerv          #+#    #+#             */
/*   Updated: 2018/12/04 15:47:59 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strctrim(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	size;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	while (s[i] == c)
	{
		i++;
		size--;
	}
	if (!s[i])
		return (ft_strdup(""));
	len = ft_strlen(s) - 1;
	while (s[len] == c && len > 0)
	{
		len--;
		size--;
	}
	if (size == ft_strlen(s))
		return (ft_strdup(s));
	return (ft_strsub(s, i, size));
}
