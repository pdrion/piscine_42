/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 21:57:42 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/03 20:55:24 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_len;
	unsigned int dest_len;
	unsigned int i;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size)
	{
		while (size - 1 > 0)
		{
			dest[i] = src[i];
			i++;
			size--;
		}
		dest[i] = 0;
	}
	if (size == 0)
	{
		if (dest_len)
			dest[i] = 0;
	}
	return (src_len);
}
