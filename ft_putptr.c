/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:47:35 by armtoros          #+#    #+#             */
/*   Updated: 2025/02/04 16:47:37 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long nbr, char *simb, unsigned long long base)
{
	if (nbr < base)
		return (ft_putchar(simb[nbr]));
	return (ft_putptr(nbr / base, simb, base)
		+ ft_putptr(nbr % base, simb, base));
}
