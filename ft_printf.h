/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:43:57 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/20 18:03:33 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_putnbr(long i);
int		ft_putnbru(unsigned int i);
int		ft_putstr(char *s);
int		ft_printf(char *format, ...);
int		ft_x(unsigned long i, int a);

#endif
