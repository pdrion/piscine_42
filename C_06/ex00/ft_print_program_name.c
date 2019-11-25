/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:54:52 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/07 23:20:38 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char *prog_name;

	if (argc > 0)
	{
		prog_name = argv[0];
		while (*prog_name != '\0')
			ft_putchar(*prog_name++);
		ft_putchar('\n');
	}
	return (0);
}
