/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:19:54 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/05 16:07:38 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	while (dest[i])
		i++;
	ptr = dest + i;
	i = 0;
	while (i < nb && src[i])
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	ptr[i] = 0;
	return (dest);
}
