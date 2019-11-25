/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:52:45 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/19 20:11:49 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sort_tab(char **tab, int i, int j)
{
	char *temp;

	if (tab[i][j] < tab[i + 1][j])
		return (2);
	if (tab[i][j] > tab[i + 1][j])
	{
		temp = tab[i];
		tab[i] = tab[i + 1];
		tab[i + 1] = temp;
		return (1);
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	while (tab[k + 1])
	{
		i = 0;
		while (tab[i + 1])
		{
			j = 0;
			while (tab[i][j] && tab[i + 1][j])
			{
				if (sort_tab(tab, i, j) == 1)
					break ;
				if (sort_tab(tab, i, j) == 2)
					break ;
				j++;
			}
			i++;
		}
		k++;
	}
}
