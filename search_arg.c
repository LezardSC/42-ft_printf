/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:49:24 by jrenault          #+#    #+#             */
/*   Updated: 2022/11/24 15:36:06 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	search_arg(va_list arg, char c)
{
	if (c == 'c')
		ispercent_c(va_arg(arg, int));
	if (c == 'X')
		ispercent_capx(va_arg(arg, int));
	if (c == 'd')
		ispercent_d_i(va_arg(arg, int));
	if (c == 'i')
		ispercent_d_i(va_arg(arg, int));
	if (c == 'p')
		ispercent_p(va_arg(arg, unsigned long long int));
	if (c == 's')
		ispercent_s(va_arg(arg, char *));
	if (c == 'u')
		ispercent_u(va_arg(arg, unsigned int));
	if (c == 'x')
		ispercent_x(va_arg(arg, int));
}
