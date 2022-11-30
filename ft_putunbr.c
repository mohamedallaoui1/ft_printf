/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:20:48 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/04 16:09:17 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int k)
{
	char		c;
	int			count;

	count = 0;
	if (k >= 0 && k <= 9)
	{
		c = k + 48;
		write (1, &c, 1);
		count++;
	}
	if (k > 9)
	{
		count += ft_putunbr(k / 10);
		count += ft_putunbr(k % 10);
	}
	return (count);
}
