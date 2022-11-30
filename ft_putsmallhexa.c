/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsmallhexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:04:15 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/04 16:07:28 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putsmallhexa(unsigned int i)
{
	char	*s;
	int		count;

	count = 0;
	s = "0123456789abcdef";
	if (i < 16)
	{
		ft_putchar(s[i]);
		count++;
	}
	else
	{
		count += ft_putsmallhexa(i / 16);
		count += ft_putsmallhexa(i % 16);
	}
	return (count);
}
