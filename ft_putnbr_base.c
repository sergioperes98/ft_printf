/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:43:07 by svilaca-          #+#    #+#             */
/*   Updated: 2023/01/16 21:57:56 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_uli	ft_putnbr_base(t_uli nbr, t_uli base, char *flag)
{
	t_uli	aux;

	aux = 0;
	if (nbr >= base)
		aux += ft_putnbr_base(nbr / base, base, flag);
	aux += ft_putchar(flag[(nbr % base)]);
	return (aux);
}

// int	main(void)
// {
// 	ft_putnbr_base(0, 10, HEX);
// 	return (0);
// }