/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 12:17:42 by axelgerv          #+#    #+#             */
/*   Updated: 2018/12/04 12:18:47 by axelgerv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int racine;
	int sqrt;

	racine = 1;
	sqrt = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (racine <= nb / 2)
	{
		sqrt = racine * racine;
		if (nb == sqrt)
			return (racine);
		racine++;
	}
	return (0);
}
