/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 23:42:00 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/05 14:07:40 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_positif(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else if (nb)
	{
		ft_putnbr(nb / 10);
		ft_putchar(ft_positif(nb % 10) + 48);
	}
	return ;
}
