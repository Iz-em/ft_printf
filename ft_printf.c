/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:43:47 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/21 17:59:46 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	form(char *format, va_list ptr)
{
	int	i;

	i = 0;
	if (*format == 'i' || *format == 'd')
			i += ft_putnbr(va_arg(ptr, int));
	else if (*format == 'c')
			i += ft_putchar(va_arg (ptr, int));
	else if (*format == 's')
			i += ft_putstr (va_arg(ptr, char *));
	else if (*format == 'p')
	{
			i += write (1, "0x", 2);
			i += ft_x(va_arg (ptr, size_t), 1);
	}
	else if (*format == '%')
			i += ft_putchar ('%');
	else if (*format == 'u')
			i += ft_putnbru(va_arg (ptr, unsigned int));
	else if (*format == 'x')
			i += ft_x(va_arg(ptr, unsigned int), 1);
	else if (*format == 'X')
			i += ft_x(va_arg(ptr, unsigned int), 2);
	return (i);
}

int	ft_printf(char *format, ...)
{
	int		i;
	va_list	ptr;

	i = 0;
	va_start (ptr, format);
	while (*format)
	{
		if (*format != '%')
			i += ft_putchar(*format);
		if (*++format == '\0')
			break ;
		if (*--format == '%')
		{
			format++;
			i += form(format, ptr);
		}
		format++;
	}
	va_end (ptr);
	return (i);
}
int main(int argc, char const *argv[])
{
	ft_printf("llffdg;dfg");
	//printf("%%%");
	return 0;
}
