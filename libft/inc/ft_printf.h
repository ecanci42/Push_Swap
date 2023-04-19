/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:00:42 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:00:43 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putptr(void *p);
int		ft_putnbr(long n);
int		ft_puthex(unsigned int n, char c);
int		ft_type(va_list ap, char c);
#endif
