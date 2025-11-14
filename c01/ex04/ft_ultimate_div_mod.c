/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 09:11:12 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/09 10:52:55 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 10;
	b = 3;
	ptr_a = &a;
	ptr_b = &b;
	printf("pointer a: %d\n", *ptr_a);
	printf("pointer b: %d\n", *ptr_b);
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("pointer a after function: %d\n", *ptr_a);
	printf("pointer b after function: %d\n", *ptr_b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}*/
