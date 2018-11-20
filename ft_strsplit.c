/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:40:29 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/19 15:56:00 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
			count = count + 1;
		while (str[i + 1] && str[i] != c)
			i++;
		i++;
	}
	return (count);
}

int		ft_count_in_words(char *str, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_fillit(char **tab, int words, char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (k < words)
	{
		j = 0;
		if (!(tab[k] = (char *)malloc(sizeof(char) *
						(ft_count_in_words((char *)s, c) + 1))))
			return (0);
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			tab[k][j++] = s[i++];
		tab[k][j] = '\0';
		k++;
	}
	tab[k] = 0;
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	if (!s)
		return (NULL);
	char	**tab;
	int		words;

	words = ft_count_words((char *)s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (words + 1))))
		return (0);
	ft_fillit(tab, words, s, c);
	return (tab);
}
