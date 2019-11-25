/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:10:59 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/15 15:28:11 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tbl;
	int size;

	if (min >= max)
		return (0);
	size = max - min;
	if (!(tbl = (int*)malloc(sizeof(*tbl) * (size))))
		return (0);
	i = 0;
	while ((min + i) < max)
	{
		tbl[i] = (min + i);
		i++;
	}
	return (tbl);
}
