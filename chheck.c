/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chheck.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazzal <mnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:13:53 by mnazzal           #+#    #+#             */
/*   Updated: 2026/10/07 11:15:10 by mnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check(char format, va_list args)
{
	if (format == 'c')
		return (ft_printchar(args));
	else if (format == 's')
		return (ft_printstring(args));
	else if (format == 'd' || format == 'i')
		return (ft_printdigit(args));
	else if (format == 'p')
		return (ft_printp(args));
	else if (format == 'X')
		return (ft_printxcap(args));
	else if (format == 'x')
		return (ft_printx(args));
	else if (format == 'u')
		return (ft_printdigitu(args));
	return (0);
}
