/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:01:51 by armtoros          #+#    #+#             */
/*   Updated: 2025/02/03 20:01:53 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *simb, unsigned int base)
{
	if (nbr < base)
		return (ft_putchar(simb[nbr]));
	return (ft_putnbr_base(nbr / base, simb, base)
		+ ft_putnbr_base(nbr % base, simb, base));
}
