/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:42:38 by mallaoui          #+#    #+#             */
/*   Updated: 2022/11/05 02:25:56 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putunbr(unsigned int n);
int		ft_putsmallhexa(unsigned int i);
int		ft_putcaphexa(unsigned int i);
int		ft_putxaddr(unsigned long i);
int		to_check1(const char *s, va_list ptr);
int		to_check2(const char *s, va_list ptr);
int		ft_case(char c);

#endif