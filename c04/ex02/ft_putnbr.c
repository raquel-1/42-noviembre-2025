/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:07:59 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/20 16:35:34 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	l;

	l = nb;
	if (l < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (l >= 10)
		ft_putnbr(l / 10);
	ft_putchar((l % 10) + 48);
}
/*
int	main(void)
{
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	return (0);
}*/
