/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:38:42 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/03 19:24:55 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	k;
	char	c;
	int		count;

	k = n;
	count = 0;
	if (k < 0)
	{
		write (1, "-", 1);
		k *= -1;
		count++;
	}
	if (k >= 0 && k <= 9)
	{
		c = k + 48;
		write (1, &c, 1);
		count++;
	}
	if (k > 9)
	{
		count += ft_putnbr(k / 10);
		count += ft_putnbr(k % 10);
	}
	return (count);
}
