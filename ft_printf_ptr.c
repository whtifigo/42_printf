/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matda-co <matda-co@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:20:40 by matda-co          #+#    #+#             */
/*   Updated: 2024/11/14 10:37:00 by matda-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_address(unsigned long long nbr)
{
	unsigned long long	n;
	unsigned long long	len;

	n = nbr;
	len = 0;
	if (n < 16)
		len += write(1, &"0123456789abcdef"[n], 1);
	else if (n >= 16)
	{
		len += print_address(n / 16);
		len += print_address(n % 16);
	}
	return (len);
}

int	print_ptr(unsigned long long pointer)
{
	unsigned long long	len;

	len = 0;
	if (!pointer)
		return (print_str("(nil)"));
	else
		len += print_str("0x");
	len += print_address(pointer);
	return (len);
}
