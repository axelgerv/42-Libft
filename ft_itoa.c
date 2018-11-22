/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:11:44 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/22 09:42:02 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_getlen(int n)
{
	int				len;
	unsigned int	nb;

	len = 0;
	if (n < 0)
		nb = -n;
	else
		nb = n;
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	return (len + 1);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	nb;

	i = ft_getlen(n);
	if (n < 0)
		i++;
	if (!(str = ft_strnew(i)))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	nb = n;
	i--;
	while (nb >= 10)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	str[i] = nb + '0';
	return (str);
}
