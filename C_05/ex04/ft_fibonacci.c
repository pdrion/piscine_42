/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:02:24 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/08 00:38:58 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int res;

	res = 0;
	if (index < 0)
		return (-1);
	else if (index < 1)
		res = 0;
	else if (index <= 2)
		res = 1;
	else if (index > 1)
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
