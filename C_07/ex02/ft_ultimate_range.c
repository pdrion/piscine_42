/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:52:49 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/16 12:25:36 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = min;
	if (min >= max)
		return (0);
	if (!(*range = (int*)malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (max - tmp);
}
