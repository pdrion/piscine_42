/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:31:07 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/06 16:17:02 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *arg1, char *arg2)
{
	unsigned int i;

	i = 0;
	while (arg1[i] != '\0' && arg2[i] && arg1[i] == arg2[i])
	{
		i++;
	}
	if (arg1[i] == arg2[i])
		return (0);
	else
		return (arg1[i] - arg2[i]);
}

int		main(int argc, char **argv)
{
	char			*param_tmp;
	unsigned int	i;

	i = 0;
	while (argv[++i] && argv[i + 1] && argc > 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			param_tmp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = param_tmp;
			i = 0;
		}
	}
	i = 0;
	while (argv[++i] != '\0')
	{
		while (*argv[i] != '\0')
			ft_putchar(*argv[i]++);
		ft_putchar('\n');
	}
	return (0);
}
