/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:42:47 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/11 11:54:10 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_base_len(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int		ft_doublons(int base_len, char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < base_len - 1)
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_convert(int base_len, unsigned int nbr, char *base)
{
	if (nbr)
	{
		ft_convert(base_len, nbr / base_len, base);
		ft_putchar(base[nbr % base_len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	unsigned int	u_nbr;

	base_len = ft_base_len(base);
	if (base_len <= 1 || ft_doublons(base_len, base) == 0)
		return ;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		u_nbr = -nbr;
	}
	else
		u_nbr = nbr;
	ft_convert(base_len, u_nbr, base);
}
