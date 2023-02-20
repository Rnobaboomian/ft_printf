/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:08:12 by arbaboom          #+#    #+#             */
/*   Updated: 2022/04/05 15:15:34 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	validation(const char *format, va_list arg)
{
	int	res;

	res = 0;
	if (*format == 'c')
		res += ft_putchar(va_arg(arg, int));
	else if (*format == 's')
		res += ft_putstr(va_arg(arg, char *));
	else if (*format == 'p')
		res += ft_pnb_p((size_t)(va_arg(arg, int *)), "0123456789abcdef");
	else if (*format == 'd')
		res += ft_putnbr(va_arg(arg, int));
	else if (*format == 'i')
		res += ft_putnbr(va_arg(arg, int));
	else if (*format == 'u')
		res += ft_put_nbr_b(va_arg(arg, unsigned int), "0123456789");
	else if (*format == 'x')
		res += ft_put_nbr_b(va_arg(arg, int ), "0123456789abcdef");
	else if (*format == 'X')
		res += ft_put_nbr_b(va_arg(arg, int), "0123456789ABCDEF");
	else if (*format == '%')
		res += ft_putchar('%');
	return (res);
}
