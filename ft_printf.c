/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:14:41 by jrenault          #+#    #+#             */
/*   Updated: 2022/11/21 16:44:04 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	const char	*str;
	va_list		arg;

	va_start(arg, format);
	printf("Hello: %s", format);
	str = va_arg(arg, const char *);
	printf(", %s\n", str);
	str = va_arg(arg, const char *);
	printf(", %s\n", str);
	va_end(arg);
	return (0);
}

int	main(void)
{
	ft_printf("Test1", "Test2", "Test3");
	return (EXIT_SUCCESS);
}
