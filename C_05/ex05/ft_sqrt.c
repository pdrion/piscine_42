/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:43:32 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/08 21:56:55 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int calcule;
	int i;
	int a;

	a = 1;
	i = 0;
	calcule = 0;
	if (nb <= 0)
		return (0);
	while (calcule < nb && i <= 46340)
	{
		calcule = calcule + a;
		a = a + 2;
		i++;
	}
	if (calcule == nb)
		return (i);
	else
		return (0);
}
