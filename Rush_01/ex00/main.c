/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrduper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:00:50 by enrduper          #+#    #+#             */
/*   Updated: 2019/09/08 16:59:41 by enrduper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"

int		main(int argc, char **argv)
{
	int		tab[6][6];
	int		n;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	n = 4;
	init_tab(argv[1], n, tab);
	if (!ft_backtrack(1, n, tab))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
