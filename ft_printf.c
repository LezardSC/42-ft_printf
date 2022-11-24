/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:14:41 by jrenault          #+#    #+#             */
/*   Updated: 2022/11/24 15:42:20 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// J’écris jusqu’au pourcent
// Je renvoie le pourcent avec l’arg.
// J’identifie l’arg et renvoie à la bonne fonction.
// J’affiche l’arg
// Je reviens jusqu’au prochain pourcent ou la fin de la string
// Je passe à l'arg d'après si il y a

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	char			*str;
	char			*temp_str;
	int				i;
	int				start;
	size_t			len;
	va_list			arg;

	if (!format)
		return (0);
	va_start(arg, format);
	len = ft_strlen(format);
	str = (char *)malloc(sizeof(char *) * (len + 1));
	str = (char *)format;
	i = 0;
	start = 0;
	while (str[i])
	{
		start = i;
		while (str[i] != '%')
		{
			i++;
		}
		temp_str = ft_substr(str, start, (i - start));
//		temp_str = ft_strncpy(temp_str, str, i);
		print_text(temp_str);
		search_arg(arg, str[i + 1]);
		i += 2;
	}
	va_end(arg);
	return (0);
}

int	main(void)
{
	char	c;
	int		d;
//	unsigned int	u;
	char	*s;
	

	c = 'Z';
	d = 125;
//	u = 4294967295;
	s = "Hello World!";
	s1 = "Bye World!";

	printf("Test %p Test %p Test %p", c, d, s);
	printf("\n");
	ft_printf("Test %p Test %p Test %p", c, d, s);
	return (EXIT_SUCCESS);
}
