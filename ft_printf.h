/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:32:28 by arbaboom          #+#    #+#             */
/*   Updated: 2022/04/05 16:56:36 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>

int				validation(const char *format, va_list arg);
int				ft_printf(const char *format, ...);
int				ft_putnbr( long nb);
int				ft_pnb_p(size_t n, char *base);
int				ft_strlen(char *str);
int				ft_put_nbr_b(unsigned int n, char *base);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				digit(long nb);

#endif
