/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazzal <mnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:58:22 by mnazzal           #+#    #+#             */
/*   Updated: 2026/10/07 13:05:59 by mnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	tahweel(unsigned int s)
{
	unsigned int	ad[20];
	char			*hex;
	int				i;
	int				count;

	hex = "0123456789ABCDEF";
	i = 0;
	while (s > 0)
	{
		ad[i] = s % 16;
		s = s / 16;
		i++;
	}
	count = i;
	while (i > 0)
	{
		i--;
		if (write(1, &hex[ad[i]], 1) == -1)
			return (-1);
	}
	return (count);
}

int	ft_printxcap(va_list args)
{
	unsigned int	s;

	s = va_arg(args, unsigned int);
	if (s == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (tahweel(s));
}
