/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:09:57 by jrenault          #+#    #+#             */
/*   Updated: 2022/11/24 15:36:12 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	print_text(char *str);
void	search_arg(va_list arg, char c);
void	ispercent_c(int c);
void	ispercent_d_i(int nb);
void	ispercent_u(unsigned int u);
void	ispercent_s(char *s);
void	ispercent_x(int x);
void	ispercent_capx(int x);
void	ispercent_p(unsigned long long int p);

#endif