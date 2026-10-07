/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazzal <mnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:52:38 by mnazzal           #+#    #+#             */
/*   Updated: 2026/10/07 13:07:22 by mnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static unsigned int	count(unsigned int s)
{
	int	i;

	i = 0;
	while (0 < s)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

static int	printdigit(unsigned int m, int count)
{
	char	s;

	if (count == 0)
		return (0);
	printdigit(m / 10, count - 1);
	s = m % 10 + '0';
	if (write(1, &s, 1) == -1)
		return (-1);
	return (0);
}

int	ft_printdigitu(va_list args)
{
	unsigned int	m;
	int				cou;

	m = va_arg(args, unsigned int);
	if (m == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	cou = count(m);
	printdigit(m, cou);
	return (cou);
}
