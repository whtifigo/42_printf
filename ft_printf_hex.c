/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matda-co <matda-co@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:25:08 by matda-co          #+#    #+#             */
/*   Updated: 2024/11/11 10:49:34 by matda-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int nbr, int uplow)
{
	unsigned int	n;
	int				len;

	n = nbr;
	len = 0;
	if (n < 16)
	{
		if (uplow == 0)
			len += write(1, &"0123456789abcdef"[n], 1);
		else if (uplow == 1)
			len += write(1, &"0123456789ABCDEF"[n], 1);
	}
	if (n >= 16)
	{
		len += print_hex(n / 16, uplow);
		len += print_hex(n % 16, uplow);
	}
	return (len);
}

/*int main()
{
    unsigned int num;

	num = 255;
    printf("printf: ");
    printf("size: %i\n", printf("%x\n", num));
    printf("size: %i\n", print_hex(num, 0));
    printf("\n");

	//printf("Length printed by real printf: %d\n", len_r);
    //printf("Length printed by print_hex: %d\n", len_f);

    return 0;
}*/
