/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrduper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:00:28 by enrduper          #+#    #+#             */
/*   Updated: 2019/09/08 16:49:38 by enrduper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_error(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (i != 31)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!i % 2)
			if (!(str[i] >= '0' && str[i] <= '4'))
				return (0);
		if (i % 2)
			if (!((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
				return (0);
		i++;
	}
	if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
		return (0);
	return (1);
}

void	fill_zeros(int n, int tab[6][6])
{
	int		i;
	int		j;

	j = 0;
	while (j < n + 2)
	{
		i = 0;
		while (i < n + 2)
		{
			tab[j][i] = 0;
			i++;
		}
		j++;
	}
}

void	fill_edges_updown(char *str, int n, int tab[6][6])
{
	int		i;
	int		k;

	k = 0;
	i = 1;
	while (i < n + 1)
	{
		tab[0][i] = str[k] - '0';
		i++;
		k += 2;
	}
	i = 1;
	while (i < n + 1)
	{
		tab[n + 1][i] = str[k] - '0';
		i++;
		k += 2;
	}
}

void	fill_edges_rightleft(char *str, int n, int tab[6][6])
{
	int		i;
	int		k;

	k = (4 * n);
	i = 1;
	while (i < n + 1)
	{
		tab[i][0] = str[k] - '0';
		i++;
		k += 2;
	}
	i = 1;
	while (i < n + 1)
	{
		tab[i][n + 1] = str[k] - '0';
		i++;
		k += 2;
	}
}

void	init_tab(char *str, int n, int tab[6][6])
{
	if (!check_error(str))
		return ;
	tab[0][0] = 0;
	tab[0][n + 1] = 0;
	tab[n + 1][0] = 0;
	tab[n + 1][n + 1] = 0;
	fill_zeros(n, tab);
	fill_edges_updown(str, n, tab);
	fill_edges_rightleft(str, n, tab);
}
