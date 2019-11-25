/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:24:45 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/16 12:24:38 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat(char *tab, char **strs, char *sep, int size)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			tab[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] != '\0' && i < (size - 1))
		{
			tab[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	tab[k] = '\0';
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	char	*tab;

	len = 0;
	j = 0;
	i = 0;
	while (sep[j] != '\0')
		j++;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	if (i > 0)
		i -= 1;
	if (size == 0)
		return (tab = (char*)malloc(0));
	tab = (char*)malloc(sizeof(char) * len + sizeof(char) * (j * size));
	if (tab == 0)
		return (0);
	ft_strcat(tab, strs, sep, size);
	return (tab);
}
