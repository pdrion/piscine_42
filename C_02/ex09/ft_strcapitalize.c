/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 20:09:41 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/03 20:51:42 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alphanum(char c);
int		ft_str_is_lowercase(char c);
int		ft_str_is_uppercase(char c);

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && ft_str_is_lowercase(str[i]) == 1)
			str[i] = str[i] - 32;
		else if (i > 0 && ft_str_is_alphanum(str[i - 1]) == 0
			&& ft_str_is_lowercase(str[i]) == 1)
			str[i] = str[i] - 32;
		else if (i > 0 && ft_str_is_alphanum(str[i - 1]) == 1
			&& ft_str_is_uppercase(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_str_is_alphanum(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int		ft_str_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int		ft_str_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}
