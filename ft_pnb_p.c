/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnb_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:57:23 by arbaboom          #+#    #+#             */
/*   Updated: 2022/04/05 16:57:28 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pnb_p(size_t n, char *base)
{
	int		base_size;
	size_t	nbr_final[100];
	int		i;
	int		rt_val;

	write(1, "0x", 2);
	i = 0;
	base_size = 0;
	while (base[base_size])
		base_size++;
	if (n == 0)
	{
		write(1, "0", 1);
		return (2 + 1);
	}	
	while (n != 0)
	{
		nbr_final[i] = n % base_size;
		n = n / base_size;
		i++;
	}
	rt_val = 2 + i;
	while (--i >= 0)
		write(1, &base[nbr_final[i]], 1);
	return (rt_val);
}
