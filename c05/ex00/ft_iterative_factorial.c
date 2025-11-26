/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:51:16 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/25 12:23:41 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
/*
int	main(void)
{
	printf("Factorial of 8 is: %d\n", ft_iterative_factorial(8));
	printf("Factorial of 0 is: %d\n", ft_iterative_factorial(0));
	printf("Factorial of -1 is: %d\n", ft_iterative_factorial(-1));
	return(0);
}*/
