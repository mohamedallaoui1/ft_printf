/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcaphexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:43:01 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/04 16:04:59 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcaphexa(unsigned int i)
{
	char	*s;
	int		count;

	count = 0;
	s = "0123456789ABCDEF";
	if (i < 16)
	{
		ft_putchar(s[i]);
		count++;
	}
	else
	{
		count += ft_putcaphexa(i / 16);
		count += ft_putcaphexa(i % 16);
	}
	return (count);
}
