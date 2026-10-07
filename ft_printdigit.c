/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazzal <mnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:51:17 by mnazzal           #+#    #+#             */
/*   Updated: 2026/10/07 13:03:09 by mnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	count(long s)
{
	int	i;

	i = 0;
	while (s > 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

static int	printdigit(long m, int count)
{
	char	s;

	if (count == 0)
		return (0);
	printdigit (m / 10, count - 1);
	s = m % 10 + '0';
	if (write(1, &s, 1) == -1)
		return (-1);
	return (0);
}

int	ft_printdigit(va_list args)
{
	int		m;
	long	n;
	int		cou;

	m = va_arg(args, int);
	n = m;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	cou = count(n);
	printdigit(n, cou);
	if (m < 0)
		return (cou + 1);
	return (cou);
}
