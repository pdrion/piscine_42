/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 13:53:03 by pdrion            #+#    #+#             */
/*   Updated: 2019/08/31 14:31:39 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y && x > 0)
	{
		j = 1;
		while (j <= x)
		{
			if ((j == 1 || j == x) && i == 1)
				ft_putchar('A');
			else if ((j == 1 || j == x) && i == y)
				ft_putchar('C');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
