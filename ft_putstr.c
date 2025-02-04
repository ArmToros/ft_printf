/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:39:43 by armtoros          #+#    #+#             */
/*   Updated: 2025/02/03 18:39:46 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	res;

	if (!s)
		return (ft_putstr("(null)"));
	else
	{
		res = 0;
		while (*s)
			res += ft_putchar(*(s++));
		return (res);
	}
}
