/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:47:49 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/08 18:07:32 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
	*a = *b;
	*b = change;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 0;
	printf("a value: %d\n", a);
	printf("b value: %d\n", b);
	ft_swap(&a, &b);
	printf("a value after function: %d\n", a);
	printf("b value after function: %d\n", b);
}*/
