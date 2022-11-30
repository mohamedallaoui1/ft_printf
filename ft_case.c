/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:35:40 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/05 02:25:23 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case(char c)
{
	char	*s;
	int		i;
	int		count;

	i = 0;
	s = "diucsxXp%";
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	count += ft_putchar(c);
	return (count);
}
