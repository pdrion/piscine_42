/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fory-lav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 17:52:46 by fory-lav          #+#    #+#             */
/*   Updated: 2019/09/01 18:52:12 by fory-lav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	line(int x, char xfirst, char xmiddle, char xlast);

void	rush(int x, int y)
{
	int		count;

	count = 1;
	while (count <= y && x > 0)
	{
		if (count == 1)
		{
			line(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		if (count == y && count != 1)
		{
			line(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		else if (count < y && count != 1)
		{
			line(x, 'B', ' ', 'B');
			ft_putchar('\n');
		}
		count++;
	}
}

void	line(int x, char xfirst, char xmiddle, char xlast)
{
	int		count;

	count = 1;
	while (count <= x && x > 0)
	{
		if (count == 1)
			ft_putchar(xfirst);
		if (count == x && count != 1)
			ft_putchar(xlast);
		else if (count < x && count != 1)
			ft_putchar(xmiddle);
		count++;
	}
}
