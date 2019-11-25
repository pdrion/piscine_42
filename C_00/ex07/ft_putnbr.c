/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 00:24:05 by pdrion            #+#    #+#             */
/*   Updated: 2019/08/29 14:30:58 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_algorecurs(int nb)
{
	if (nb)
	{
		ft_putnbr_algorecurs(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb)
		ft_putnbr_algorecurs(nb);
	else
		ft_putchar('0');
}
