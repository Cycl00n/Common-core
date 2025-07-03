/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:34:48 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/03 19:51:54 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		select_output(const char c, va_list arg);
int		moduloprint(void);
int		put_hexa_void(void *add);
int		ft_putnbr_unsigned(unsigned int n);
int		put_hexa(unsigned int n);
int		put_hexa_cap(unsigned int n);

#endif