/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrduper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:58:30 by enrduper          #+#    #+#             */
/*   Updated: 2019/09/08 16:47:45 by enrduper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_backtrack(int pos, int n, int tab[6][6])
{
	int		row;
	int		col;
	int		building;

	col = pos % n ? pos % n : n;
	row = pos % n ? pos / n + 1 : pos / n;
	building = 0;
	if (pos == n * n + 1)
	{
		print_tab(n, tab);
		return (1);
	}
	else
	{
		building = 0;
		while (++building <= n)
		{
			tab[row][col] = building;
			if (check_tab(pos, n, tab))
				if (ft_backtrack(pos + 1, n, tab))
					return (1);
		}
		tab[row][col] = 0;
		return (0);
	}
}
