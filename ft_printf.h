/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazzal <mnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:05:17 by mnazzal           #+#    #+#             */
/*   Updated: 2026/10/07 11:18:18 by mnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_check(char c, va_list args);
int		ft_printchar(va_list args);
int		ft_printstring(va_list args);
int		ft_printdigit(va_list args);
int		ft_printdigitu(va_list args);
int		ft_printp(va_list args);
int		ft_printx(va_list args);
int		ft_printxcap(va_list args);

#endif
