/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:54:16 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/19 19:54:42 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sort_tab(char **tab, int i, int (*cmp)(char *, char *))
{
	char *temp;

	if (cmp(tab[i], tab[i + 1]) > 0)
	{
		temp = tab[i];
		tab[i] = tab[i + 1];
		tab[i + 1] = temp;
		return (1);
	}
	return (0);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
				sort_tab(tab, i, cmp);
				j++;
			}
			i++;
		}
		k++;
	}
}
