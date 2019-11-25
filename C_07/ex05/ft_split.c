/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:26:09 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/18 00:07:30 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_compare(char *str, char *charset)
{
	int		i;
	int		j;
	char	*tbl_compare;

	i = 0;
	while (str[i++] != '\0')
		if (!(tbl_compare = (char *)malloc(sizeof(char) * (i + 1))))
			return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		tbl_compare[i] = str[i];
		j = 0;
		while (charset[j] != '\0')
		{
			if (tbl_compare[i] == charset[j])
				tbl_compare[i] = charset[0];
			j++;
		}
		i++;
	}
	tbl_compare[i] = '\0';
	return (tbl_compare);
}

int		ft_cnt_char(char *str, char charset, int nb_sep)
{
	int		i;
	int		count;
	int		nb_string;
	int		b;

	b = 0;
	nb_string = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		b = i;
		if (str[i] != charset)
		{
			while (charset != str[i] && str[i] != '\0')
			{
				i++;
				nb_string++;
			}
			if (++count == nb_sep)
				return (nb_string);
		}
		i = (b == i) ? i + 1 : i;
	}
	return (nb_string);
}

int		ft_cnt_charset(char *str, char charset)
{
	int		i;
	int		count;
	int		b;

	b = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		b = i;
		if (str[i] != charset)
		{
			while (charset != str[i] && str[i] != '\0')
				i++;
			count++;
		}
		i = (b == i) ? i + 1 : i;
	}
	return (count);
}

void	ft_fill(char *tbl_row, char *str, char charset, int nb_sep)
{
	int		c;
	int		i;
	int		count;
	int		b;

	c = 0;
	i = 0;
	count = 0;
	b = 0;
	while (str[i] != '\0')
	{
		b = i;
		if (str[i] != charset)
		{
			while (charset != str[i] && str[i] != '\0')
			{
				if (count == nb_sep)
					tbl_row[c++] = str[i];
				i++;
			}
			count++;
		}
		i = (b == i) ? i + 1 : i;
	}
	tbl_row[c] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**tbl_split;
	char	*tbl_compare;
	int		i;
	char	sep;

	i = 0;
	tbl_compare = ft_compare(str, charset);
	sep = charset[0];
	if (!(tbl_split = (char **)malloc(sizeof(char*)
			* (ft_cnt_charset(tbl_compare, sep) + 1))))
		return (NULL);
	i = 0;
	while (i < ft_cnt_charset(tbl_compare, sep))
	{
		if (!(tbl_split[i] = (char *)malloc(sizeof(char)
			* (ft_cnt_char(tbl_compare, sep, i + 1) + 1))))
			return (NULL);
		ft_fill(*(tbl_split + i), tbl_compare, sep, i);
		i++;
	}
	if (!(tbl_split[i] = (char *)malloc(sizeof(char) * 1)))
		return (NULL);
	*(tbl_split + i) = NULL;
	return (tbl_split);
}
