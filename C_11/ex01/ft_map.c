/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:00:11 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/19 20:05:29 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_result;

	i = 0;
	if (!(tab_result = (int *)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
	{
		tab_result[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_result);
}
