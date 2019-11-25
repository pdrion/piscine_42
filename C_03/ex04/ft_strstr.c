/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:02:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/09 11:35:33 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char			*begining;
	char			*compare;

	while (str != '\0')
	{
		begining = str;
		compare = to_find;
		while (*str && *compare && *str == *compare)
		{
			str++;
			compare++;
		}
		if (*compare == '\0')
			return (begining);
		if (compare != 0 && *str == '\0')
			return (0);

		str = begining + 1;
	}
	return (str);
}
