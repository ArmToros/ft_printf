/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:17:18 by armtoros          #+#    #+#             */
/*   Updated: 2025/02/03 18:17:21 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choose(const char *s, va_list list)
{
	if (*s == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (*s == 'd' || *s == 'i')
		return (ft_signed(va_arg(list, int)));
	else if (*s == 'x')
		return (ft_putnbr_base(va_arg(list, int), "0123456789abcdef", 16));
	else if (*s == 'X')
		return (ft_putnbr_base(va_arg(list, int), "0123456789ABCDEF", 16));
	else if (*s == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (*s == 'u')
		return (ft_putnbr_base(va_arg(list, int), "0123456789", 10));
	else if (*s == '%')
		return (ft_putchar('%'));
	else if (*s == 'p')
		return (ft_putstr("0x")
			+ ft_putptr(va_arg(list, long long), "0123456789abcdef", 16));
	return (0);
}
