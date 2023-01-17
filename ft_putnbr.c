/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:37:30 by svilaca-          #+#    #+#             */
/*   Updated: 2023/01/16 12:19:46 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long int	nbr;
	int			aux;

	nbr = nb;
	aux = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		aux += ft_putchar('-');
	}
	if (nbr > 9)
	{
		aux += ft_putnbr(nbr / 10);
		aux += ft_putnbr(nbr % 10);
	}
	else
		aux += ft_putchar(nbr + 48);
	return (aux);
}
