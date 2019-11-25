/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrduper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:02:00 by enrduper          #+#    #+#             */
/*   Updated: 2019/09/08 16:58:47 by enrduper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

int		check_tab(int pos, int n, int tab[6][6]);
void	print_tab(int n, int tab[6][6]);
int		check_views(int row, int col, int n, int tab[6][6]);
void	init_tab(char *str, int n, int tab[6][6]);
int		ft_backtrack(int pos, int n, int tab[6][6]);

#endif
