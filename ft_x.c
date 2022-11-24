/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:44:14 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/20 18:03:16 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned long i, int a)
{
	int		j;
	char	*base;
	char	*base1;

	j = 0;
	base = "0123456789abcdef";
	base1 = "0123456789ABCDEF";
	if (i > 15)
		j += ft_x(i / 16, a);
	if (a == 1)
		j += ft_putchar(base[i % 16]);
	else
		j += ft_putchar(base1[i % 16]);
	return (j);
}
