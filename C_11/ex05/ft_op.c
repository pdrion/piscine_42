/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:51:08 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/19 19:51:12 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int	plus(int i, int j)
{
	ft_putnbr(i + j);
	write(1, "\n", 1);
	return (0);
}

int	minus(int i, int j)
{
	ft_putnbr(i - j);
	write(1, "\n", 1);
	return (0);
}

int	mult(int i, int j)
{
	ft_putnbr(i * j);
	write(1, "\n", 1);
	return (0);
}

int	divide(int i, int j)
{
	ft_putnbr(i / j);
	write(1, "\n", 1);
	return (0);
}

int	mod(int i, int j)
{
	ft_putnbr(i % j);
	write(1, "\n", 1);
	return (0);
}
