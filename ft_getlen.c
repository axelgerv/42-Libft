/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:25:09 by axelgerv          #+#    #+#             */
/*   Updated: 2018/11/27 18:25:34 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_getlen(int n)
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
