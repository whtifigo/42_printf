/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matda-co <matda-co@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:37:36 by matda-co          #+#    #+#             */
/*   Updated: 2024/11/14 15:37:38 by matda-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	print_unbr(unsigned int nbr)
{
	unsigned int	n;
	unsigned int	len;

	n = nbr;
	len = 0;
	if (n >= 10)
	{
		len += print_unbr(n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', 1);
		len++;
	}
	return (len);
}
