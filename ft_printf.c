/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:45:48 by armtoros          #+#    #+#             */
/*   Updated: 2025/02/01 19:14:37 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		len;

	len = 0;
	va_start(list, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (ft_check(*s))
			{
				len += ft_choose(s++, list);
			}
		}
		if (*s != '%' && *s)
		{
			len += ft_putchar(*s);
			s++;
		}
	}
	va_end(list);
	return (len);
}
