/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:14:41 by jrenault          #+#    #+#             */
/*   Updated: 2022/11/26 17:58:28 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	shrink_ft_printf()
{

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
	i = 0;
	j = 0;
	adjust = 0;
	if (write(1, 0, 0) != 0)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (i + j - adjust);
			j += search_arg(arg, format[i + 1]);
			if (j == -1)
			{
				i++;
				adjust++;
			}
			else
			{
				i += 2;
				adjust += 2;
			}
		}
		else
			ft_putchar_fd(format[i++], 1);
	}
	return (va_end(arg), i + j - adjust);
}
