/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:48:21 by pdrion            #+#    #+#             */
/*   Updated: 2019/08/29 00:52:02 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j)
{
	char l;
	char m;
	char n;
	char o;

	l = i / 10 + 48;
	m = i % 10 + 48;
	n = j / 10 + 48;
	o = j % 10 + 48;
	write(1, &l, 1);
	write(1, &m, 1);
	write(1, " ", 1);
	write(1, &n, 1);
	write(1, &o, 1);
	if (l < '9' || m < '8' || n < '9' || o < '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a, b);
			b++;
		}
		a++;
	}
}
