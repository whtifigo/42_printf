/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matda-co <matda-co@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:30:24 by matda-co          #+#    #+#             */
/*   Updated: 2024/11/09 12:30:28 by matda-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	arg_type(va_list args, char type);
int	print_str(char *s);
int	print_ptr(unsigned long long pointer);
int	print_nbr(int nbr);
int	print_hex(unsigned int nbr, int uplow);
int	print_unbr(unsigned int nbr);
int	ft_printf(const char *str, ...);

#endif
