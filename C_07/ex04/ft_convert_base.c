/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:46:51 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/12 02:06:07 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_base_len(char *base);
int		ft_doublons(char *base);
int		ft_is_in_base(char c, char *base);
int		ft_atoi_base(char *str, char *base, int base_len);

int		ft_size_malloc(int nb, int base_len)
{
	int i;

	i = 0;
	while (nb)
	{
		nb = nb / base_len;
		i++;
	}
	return (i);
}

void	ft_convert(unsigned int nbr, char *base, char *str_convert, int i)
{
	int base_len;

	base_len = ft_base_len(base);
	str_convert[i--] = '\0';
	while (i >= 0)
	{
		str_convert[i] = base[nbr % base_len];
		nbr = nbr / base_len;
		i--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	u_nbr;
	int				nb;
	char			*str_convert;
	int				size;

	u_nbr = 0;
	if (ft_base_len(base_from) <= 1 || ft_base_len(base_to) <= 1
		|| ft_doublons(base_from) == 0 || ft_doublons(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from, ft_base_len(base_from));
	size = ft_size_malloc(nb, ft_base_len(base_to));
	size = (nb == 0) ? 1 : size;
	size = (nb < 0) ? size + 1 : size;
	u_nbr = (nb < 0) ? -nb : nb;
	if (!(str_convert = (char *)malloc(sizeof(str_convert) * size)))
		return (NULL);
	ft_convert(u_nbr, base_to, str_convert, size);
	if (nb < 0)
		*str_convert = '-';
	return (str_convert);
}
