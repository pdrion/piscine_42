/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 13:47:42 by pdrion            #+#    #+#             */
/*   Updated: 2019/08/31 15:05:10 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y && x > 0)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x) ||
				(i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('o');
			else if (j == 1 || j == x)
				ft_putchar('|');
			else if (i == 1 || i == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
