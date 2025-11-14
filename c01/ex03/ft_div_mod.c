/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:12:13 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/09 11:03:13 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;
	int	*div;
	int	*mod;

	a = 10;
	b = 3;
	x = 42;
	y = 43;
	div = &x;
	mod = &y;
	printf("a value: %d\n", a);
	printf("b value: %d\n", b);
	printf("*div value: %d\n", *div);
	printf("*mod value: %d\n", *mod);
	ft_div_mod(a, b, div, mod);
	printf("a value after function: %d\n", a);
	printf("b value after function: %d\n", b);
	printf("*div value after function: %d\n", *div);
	printf("*mod value after function: %d\n", *mod);
	printf("x after function: %d\n", x);
	printf("y after function: %d\n", y);
}*/
