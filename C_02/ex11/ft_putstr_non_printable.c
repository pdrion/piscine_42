/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 09:30:30 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/02 16:37:36 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	convert_to_hexa(int d);
int		ft_is_not_printable(char c);

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_not_printable(str[i]) == 0)
		{
			ft_putchar('\\');
			convert_to_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	convert_to_hexa(int d)
{
	if (d)
	{
		convert_to_hexa(d / 16);
		d = d % 16;
		if (d == 10)
			ft_putchar('a');
		else if (d == 11)
			ft_putchar('b');
		else if (d == 12)
			ft_putchar('c');
		else if (d == 13)
			ft_putchar('d');
		else if (d == 14)
			ft_putchar('e');
		else if (d == 15)
			ft_putchar('f');
		else
			ft_putchar(d + 48);
	}
	else if (d == 0)
		ft_putchar('0');
}

int		ft_is_not_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
