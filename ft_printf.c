/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:31:21 by svilaca-          #+#    #+#             */
/*   Updated: 2023/01/16 22:18:36 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char c, va_list ptr)
{
	t_uli	p;

	if (c == 'd' || c == 'i')
		return (ft_putnbr((va_arg(ptr, int))));
	else if (c == 's')
		return (ft_putstr((va_arg(ptr, char *))));
	else if (c == 'c')
		return (ft_putchar((va_arg(ptr, int))));
	else if (c == 'u')
		return (ft_putnbr_base((va_arg(ptr, t_ui)), 10, DEX));
	else if (c == 'x')
		return (ft_putnbr_base((va_arg(ptr, t_ui)), 16, HEX));
	else if (c == 'X')
		return (ft_putnbr_base((va_arg(ptr, t_ui)), 16, HEX_UP));
	else if (c == 'p')
	{
		p = (va_arg(ptr, t_uli));
		if (p == 0)
			return (ft_putstr("(nil)"));
		return (write(1, "0x", 2) + ft_putnbr_base(p, 16, HEX));
	}
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		aux;
	va_list	ptr;

	i = 0;
	aux = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			aux += check_format(format[i + 1], ptr);
			i++;
		}
		else
			aux += ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (aux);
}

// int	main(void)
// {
// 	//int	a = 2;
// 	printf("\n%d\n", ft_printf("%p", 0));
// 	//printf("Ola %p Eu", &a);
// 	return (0);
// }