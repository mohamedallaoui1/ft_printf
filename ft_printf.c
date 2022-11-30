/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:37:05 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/04 16:04:45 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ptr, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			count += to_check1(&fmt[i], ptr);
			count += to_check2(&fmt[i], ptr);
		}
		else
			count += ft_putchar(fmt[i]);
		if (fmt[i])
			i++;
	}
	va_end(ptr);
	return (count);
}
