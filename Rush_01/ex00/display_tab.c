/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrduper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:01:19 by enrduper          #+#    #+#             */
/*   Updated: 2019/09/08 16:50:07 by enrduper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(int n, int tab[6][6])
{
	int		i;
	int		j;

	j = 1;
	while (j <= n)
	{
		i = 1;
		while (i <= n)
		{
			ft_putchar(tab[j][i] + '0');
			if (i != n)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
