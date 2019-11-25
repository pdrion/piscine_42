/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:25:13 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/06 16:26:51 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	*param_content;
	int		i;

	i = 1;
	while (argv[i] && argc > 0)
	{
		param_content = argv[i];
		while (*param_content != '\0')
			ft_putchar(*param_content++);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
