/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:39:18 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/19 20:07:29 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int s;

	s = 0;
	i = 0;
	while (i + 1 < length && !s)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			s = -1;
		if (f(tab[i], tab[i + 1]) > 0)
			s = 1;
		i++;
	}
	while (i + 1 < length)
	{
		if ((f(tab[i], tab[i + 1]) < 0) && s == 1)
			return (0);
		if ((f(tab[i], tab[i + 1]) > 0) && s == -1)
			return (0);
		i++;
	}
	return (1);
}
