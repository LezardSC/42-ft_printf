/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:14:41 by jrenault          #+#    #+#             */
/*   Updated: 2022/11/25 15:40:20 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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
		{
			ft_putchar_fd(format[i], 1);
			i++;
		}
	}
	va_end(arg);
	return (i + j - adjust);
}

int	main()
{
 	printf("\n%d\n", printf(" %p ", 0));
	printf("\n");
  	printf("\n%d\n", ft_printf(" %p ", 0));
}
