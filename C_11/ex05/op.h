/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:51:24 by pdrion            #+#    #+#             */
/*   Updated: 2019/09/19 20:10:38 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_H
# define OP_H

# include <unistd.h>
# include <stdlib.h>

int		plus(int i, int j);
int		minus(int i, int j);
int		divide(int i, int j);
int		mult(int i, int j);
int		mod(int i, int j);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif
