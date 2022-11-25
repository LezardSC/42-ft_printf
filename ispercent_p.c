/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ispercent_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:51:24 by jrenault          #+#    #+#             */
/*   Updated: 2022/11/25 15:41:17 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ispercent_p(unsigned long p)
{
	write(1, "0x", 2);
	ft_putnbr_base_ul(p, "0123456789abcdef");
	return (ft_count_ul(p) + 1);
}
