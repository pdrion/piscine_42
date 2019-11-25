/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 22:36:16 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/05 17:17:44 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	char			*begining;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (d >= size)
		return (s + size);
	begining = dest + d;
	i = 0;
	while (i < (size - 1) && src[i] && s < size)
	{
		begining[i] = src[i];
		i++;
	}
	if (s >= size)
		return (d + s);
	return (d + s);
}
