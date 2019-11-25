/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:43:26 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/11 15:06:35 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nb;
	int i;
	int sign_count;

	nb = 0;
	i = 0;
	sign_count = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign_count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (sign_count % 2 == 0)
		return (nb);
	else
		return (-nb);
}
