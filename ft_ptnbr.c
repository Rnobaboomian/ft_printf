/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:16:30 by arbaboom          #+#    #+#             */
/*   Updated: 2022/04/05 16:23:49 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	long	l;
	int		res;

	res = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		res++;
		nb *= -1;
	}
	res += digit(nb);
	if (nb < 10)
	{
		l = nb + '0';
		write(1, &l, 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}	
	return (res);
}

int	digit(long nb)
{
	int	i;
	int	j;

	j = 0;
	i = nb;
	if (nb == 0)
		j++;
	while (i != 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}
