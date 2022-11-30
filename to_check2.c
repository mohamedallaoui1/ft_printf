/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:08:01 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/05 00:02:39 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	to_check2(const char *s, va_list ptr)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s[i] == 'i')
		count += ft_putnbr(va_arg(ptr, int));
	if (s[i] == 'u')
		count += ft_putunbr(va_arg(ptr, unsigned int));
	if (s[i] == 'x')
		count += ft_putsmallhexa(va_arg(ptr, unsigned int));
	if (s[i] == 'X')
		count += ft_putcaphexa(va_arg(ptr, unsigned int));
	if (s[i] == '%')
	{
		write(1, "%", 1);
		count++;
	}
	ft_case(s[i]);
	return (count);
}
