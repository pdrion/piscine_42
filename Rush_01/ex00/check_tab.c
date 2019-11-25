/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrduper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:59:47 by enrduper          #+#    #+#             */
/*   Updated: 2019/09/08 16:57:13 by enrduper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_row(int row, int col, int n, int tab[6][6])
{
	int		i;

	i = 1;
	while (i <= n)
	{
		if (tab[row][i] == tab[row][col] && i != col)
			return (0);
		i++;
	}
	return (1);
}

int		check_col(int row, int col, int n, int tab[6][6])
{
	int		i;

	i = 1;
	while (i <= n)
	{
		if (tab[i][col] == tab[row][col] && i != row)
			return (0);
		i++;
	}
	return (1);
}

int		check_tab(int pos, int n, int tab[6][6])
{
	int		row;
	int		col;

	col = pos % n ? pos % n : n;
	row = pos % n ? pos / n + 1 : pos / n;
	if (!check_row(row, col, n, tab))
		return (0);
	if (!check_col(row, col, n, tab))
		return (0);
	if (!check_views(row, col, n, tab))
		return (0);
	return (1);
}
