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

int	ft_printf(const char *format, char *string, int age);

int	arg_type(va_list args, char type)
{
	if (type == "c")
		ft_putchar_fd(va_arg(args, int), 1);
	if (type == "s")
		return (ft_printf_str(va_arg(args, char *)));
}
