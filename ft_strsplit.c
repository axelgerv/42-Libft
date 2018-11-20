/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:55:13 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/20 17:01:06 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
			words++;
		while (s[i + 1] && s[i] != c)
			i++;
		i++;
	}
	return (words);
}

int		ft_wordlen(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (ft_wordlen(s, c) + 1))))
			return (NULL);
		tab[i] = ft_strsub(s, 0, ft_wordlen(s, c));
		s += ft_wordlen(s, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
