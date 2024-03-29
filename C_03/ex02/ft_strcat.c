/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:30:25 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/03 22:25:19 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	while (dest[i])
		i++;
	ptr = dest + i;
	while (*src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}
