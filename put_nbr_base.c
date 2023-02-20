/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:28:58 by arbaboom          #+#    #+#             */
/*   Updated: 2022/04/05 16:32:00 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr_b(unsigned int n, char *base)
{
	int	base_size;
	int	nbr_final[100];
	int	i;
	int	rt_val;

	i = 0;
	base_size = 0;
	while (base[base_size])
		base_size++;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n != 0)
	{
		nbr_final[i] = n % base_size;
		n = n / base_size;
		i++;
	}
	rt_val = i;
	while (--i >= 0)
		write(1, &base[nbr_final[i]], 1);
	return (rt_val);
}
