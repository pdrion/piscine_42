/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:50:24 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/19 19:50:31 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

void	op_pack(int (*f[5])(int, int))
{
	f[0] = &plus;
	f[1] = &minus;
	f[2] = &mult;
	f[3] = &divide;
	f[4] = &mod;
}

void	call_op(int i, char op, int j, int (*f[5])(int, int))
{
	if (op == '+')
		f[0](i, j);
	else if (op == '-')
		f[1](i, j);
	else if (op == '*')
		f[2](i, j);
	else if (op == '/' && j != 0)
		f[3](i, j);
	else if (op == '%' && j != 0)
		f[4](i, j);
	else if (op == '/' && j == 0)
		ft_putstr("Stop : division by zero\n");
	else if (op == '%' && j == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
		write(1, "0\n", 2);
}

int		main(int argc, char **argv)
{
	int (*f[5])(int, int);

	op_pack(f);
	if (argc != 4)
		return (0);
	else if (ft_strlen(argv[2]) != 1)
		write(1, "0\n", 2);
	else
		call_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]), f);
	return (0);
}
