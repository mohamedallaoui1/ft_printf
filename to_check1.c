/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_check1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:37:10 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/04 16:11:19 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	to_check1(const char *s, va_list ptr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] == 'p')
		count += ft_putxaddr(va_arg(ptr, unsigned long));
	if (s[i] == 'd')
		count += ft_putnbr(va_arg(ptr, int));
	if (s[i] == 'c')
		count += ft_putchar((char)va_arg(ptr, int));
	if (s[i] == 's')
		count += ft_putstr(va_arg(ptr, char *));
	return (count);
}
