/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:14:41 by jrenault          #+#    #+#             */
/*   Updated: 2023/12/06 04:39:22 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	initialize_variables(int *i, int *j, int *adjust)
{
	*i = 0;
	*j = 0;
	*adjust = 0;
}

void	ft_shrink_printf(const char *format, int *i, int *j, int *adjust)
{
	if (*j == -1)
	{
		*i += 1;
		*adjust += 1;
	}
	else
	{
		*i += 2;
		*adjust += 2;
	}
}

int	ft_printf(const char *format, ...)
{
	int				i;
	int				j;
	int				adjust;
	va_list			arg;

	if (!format)
		return (0);
	va_start(arg, format);
	initialize_variables(&i, &j, &adjust);
	if (write(1, 0, 0) != 0)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (i + j - adjust);
			j += search_arg(arg, format[i + 1]);
			ft_shrink_printf(format, &i, &j, &adjust);
		}
		else
			ft_putchar_fd(format[i++], 1);
	}
	return (va_end(arg), i + j - adjust);
}
