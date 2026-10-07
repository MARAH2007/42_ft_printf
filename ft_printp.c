/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazzal <mnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:51:56 by mnazzal           #+#    #+#             */
/*   Updated: 2026/10/07 13:03:42 by mnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	tahweel(unsigned long long s)
{
	unsigned long long	ad[20];
	char				*hex;
	int					i;
	int					count;

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

int	ft_printp(va_list args)
{
	void				*s;
	unsigned long long	n;
	int					count;

	s = va_arg(args, void *);
	n = (unsigned long long)s;
	if (s == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	count = tahweel(n);
	return (count + 2);
}
