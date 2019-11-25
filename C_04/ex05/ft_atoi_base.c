/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:56:50 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/11 15:02:43 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base_len(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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

int		ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	sign;
	int	result;
	int	i;
	int	index;

	sign = 1;
	i = 0;
	result = 0;
	base_len = ft_base_len(base);
	if (base_len <= 1 || ft_doublons(base_len, base) == 0)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] <= '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((index = ft_is_in_base(str[i++], base)) != -1)
		result = result * base_len + index;
	return (result * sign);
}
