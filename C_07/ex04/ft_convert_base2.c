/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 02:00:45 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/12 02:03:54 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base_len(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		i++;
	}
	return (i);
}

int		ft_doublons(char *base)
{
	int i;
	int j;
	int base_len;

	i = 0;
	j = 0;
	base_len = ft_base_len(base);
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

int		ft_is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base, int base_len)
{
	int	sign;
	int	result;
	int	i;
	int	index;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((index = ft_is_in_base(str[i], base)) != -1)
	{
		result = result * base_len + index;
		i++;
	}
	return (result * sign);
}
