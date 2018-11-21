/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:55:13 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/21 16:30:32 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
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

static int		ft_wordlen(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static void		ft_clean(char **tab, int delcount)
{
	int i;

	i = 0;
	while (i < delcount)
		ft_strdel(&tab[i++]);
	ft_strdel(&tab[i]);
}

char			**ft_strsplit(char const *s, char c)
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
		if (!(tab[i] = ft_strsub(s, 0, ft_wordlen(s, c))))
		{
			ft_clean(tab, i);
			return (NULL);
		}
		s += ft_wordlen(s, c);
		i++;
	}
	tab[words] = 0;
	return (tab);
}
