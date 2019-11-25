/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrduper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:26:35 by enrduper          #+#    #+#             */
/*   Updated: 2019/09/08 16:58:56 by enrduper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		view_left_right(int row, int n, int tab[6][6])
{
	int		i;
	int		count;
	int		view;
	int		max;

	i = 1;
	count = 0;
	view = 0;
	max = tab[row][0];
	while (i <= n)
	{
		if (tab[row][i] > count)
		{
			count = tab[row][i];
			view += 1;
			if (view > max)
				return (0);
		}
		i++;
	}
	if (tab[row][n] != 0 && view != max)
		return (0);
	return (1);
}

int		view_right_left(int row, int n, int tab[6][6])
{
	int		i;
	int		count;
	int		view;
	int		max;

	i = n;
	count = 0;
	view = 0;
	max = tab[row][n + 1];
	while (i >= 1)
	{
		if (tab[row][i] > count)
		{
			count = tab[row][i];
			view += 1;
			if (view > max && tab[row][n] != 0)
				return (0);
		}
		i--;
	}
	if (tab[row][n] != 0 && view != max)
		return (0);
	return (1);
}

int		view_up_down(int col, int row, int n, int tab[6][6])
{
	int		i;
	int		count;
	int		view;
	int		max;

	i = 1;
	count = 0;
	view = 0;
	max = tab[0][col];
	while (i <= row)
	{
		if (tab[i][col] > count)
		{
			count = tab[i][col];
			view += 1;
			if (view > max)
				return (0);
		}
		i++;
	}
	if (tab[n][col] != 0 && view != max)
		return (0);
	return (1);
}

int		view_down_up(int col, int n, int tab[6][6])
{
	int		i;
	int		count;
	int		view;
	int		max;

	i = n;
	count = 0;
	view = 0;
	max = tab[n + 1][col];
	while (i >= 1)
	{
		if (tab[i][col] > count)
		{
			count = tab[i][col];
			view += 1;
			if (view > max && tab[n][col] != 0)
				return (0);
		}
		i--;
	}
	if (tab[n][col] != 0 && view != max)
		return (0);
	return (1);
}

int		check_views(int row, int col, int n, int tab[6][6])
{
	if (view_left_right(row, n, tab) && view_right_left(row, n, tab)
			&& view_up_down(col, row, n, tab) && view_down_up(col, n, tab))
		return (1);
	return (0);
}
