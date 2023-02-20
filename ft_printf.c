/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:23:09 by arbaboom          #+#    #+#             */
/*   Updated: 2022/04/05 15:04:37 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char	*format, ...)
{
	int		res;
	int		state;
	va_list	arg;

	res = 0;
	state = 0;
	va_start (arg, format);
	while (*format)
	{
		if (*format == '%')
		{	
			format++;
			res += validation(format, arg);
			format++;
			continue ;
		}
		res += ft_putchar(*format);
		format++;
	}	
	va_end(arg);
	return (res);
}
