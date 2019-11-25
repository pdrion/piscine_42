/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goodatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:08:46 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/09 13:09:55 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_atoi(char *str)
{
	int nb;
	int i;
	int minus_count;

	nb = 0;
	i = 0;
	minus_count = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' ||
		   str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (minus_count % 2 == 0)
		return (nb);
	else
		return (-nb);
}
