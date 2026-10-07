/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazzal <mnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:57:56 by mnazzal           #+#    #+#             */
/*   Updated: 2026/10/07 12:36:11 by mnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	tahweel(unsigned int s)
{
	unsigned int	ad[20];
	char			*hex;
	int				i;
	int				count;

	hex = "0123456789abcdef";
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

int	ft_printx(va_list args)
{
	unsigned int	s;
	int				c;

	s = va_arg(args, unsigned int);
	if (s == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	c = tahweel(s);
	return (c);
}
