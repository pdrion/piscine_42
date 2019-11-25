/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:50:53 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/19 20:08:31 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int		ft_atoi(char *str)
{
	int i;
	int val;
	int s;

	s = 1;
	val = 0;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			s *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		val *= 10;
		val += str[i] - '0';
		i++;
	}
	return (val * s);
}

int		ft_strlen(char *str)
{
	int compt;

	compt = 0;
	while (*(str + compt) != '\0')
	{
		compt++;
	}
	return (compt);
}

void	ft_putstr(char *str)
{
	int compt;

	compt = 0;
	while (*(str + compt) != '\0')
	{
		compt++;
	}
	write(1, str, compt);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int compt;
	int tab[11];

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	compt = 0;
	while (nb / 10 != 0 && nb != -2147483648)
	{
		tab[compt] = nb % 10;
		nb = nb / 10;
		compt++;
	}
	tab[compt] = nb % 10;
	while (compt >= 0 && nb != -2147483648)
	{
		ft_putchar(tab[compt] + '0');
		compt--;
	}
}
