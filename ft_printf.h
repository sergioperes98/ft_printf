/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:32:28 by svilaca-          #+#    #+#             */
/*   Updated: 2023/01/16 22:03:02 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <stdarg.h>

# define DEX "0123456789"
# define HEX "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

typedef unsigned int		t_ui;
typedef unsigned long int	t_uli;

int				ft_printf(const char *format, ...);
size_t			ft_strlen(const char *s);
int				ft_putchar(char c);
int				ft_putnbr(int nb);
int				ft_putstr(char *str);
t_uli			ft_putnbr_base(t_uli nbr, t_uli base, char *flag);

#endif