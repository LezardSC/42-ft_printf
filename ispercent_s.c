/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ispercent_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:51:20 by jrenault          #+#    #+#             */
/*   Updated: 2023/12/06 04:39:41 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ispercent_s(char *s)
{
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	ft_putstr(s);
	return (ft_strlen(s));
}
