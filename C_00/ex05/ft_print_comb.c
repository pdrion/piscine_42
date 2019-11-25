/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 20:25:11 by pdrion            #+#    #+#             */
/*   Updated: 2019/08/28 22:16:03 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l, char m, char n)
{
	write(1, &l, 1);
	write(1, &m, 1);
	write(1, &n, 1);
	if (l < '7' || m < '8' || n < '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
