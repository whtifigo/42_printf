/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matda-co <matda-co@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:24:33 by matda-co          #+#    #+#             */
/*   Updated: 2024/11/09 14:35:49 by matda-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	arg_type(va_list args, char type)
{
	if (type == "c")
		ft_putchar_fd(va_arg(args, int), 1);
	if (type == "s")
		return (print_str(va_arg(args, char *)));
	if (type == "p")
		return (print_ptr(va_arg(args, void *)));
	if (type == "d" || type == "i")
		return (print_nbr(va_arg(args, int)));
	if (type == "x")
		return (print_hex(va_arg(args, unsigned int) 0));
	if (type == "X")
		return (print_hex(va_arg(args, unsigned int) 1));
	if (type == "u")
		return (print_unbr(va_args(args, unsigned int)));
	if (type == "%")
		return (ft_putchar_fd('%', 1));
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int len;
	va_list	args;

	i =
	len = 0;
	va_start (args, str);
	
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		else
			len += arg_type(args, str[i++]);
		i++;
	}
	va_end(args);
	return (len);
}
