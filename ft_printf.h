/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:52:24 by armtoros          #+#    #+#             */
/*   Updated: 2025/02/03 16:52:35 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printf(const char *s, ...);
int	ft_choose(const char *s, va_list list);
int	ft_check(char c);
int	ft_putnbr_base(unsigned int nbr, char *simb, unsigned int base);
int	ft_signed(long long nbr);
int	ft_putptr(unsigned long long nbr, char *simb, unsigned long long base);

#endif
