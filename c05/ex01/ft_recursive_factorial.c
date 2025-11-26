/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:17:54 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/26 11:11:41 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int 	main(void)
{
	printf("Factorial of 8 is: %d\n", ft_recursive_factorial(8));
	printf("Factorial of 0 is: %d\n", ft_recursive_factorial(0));
	printf("Factorial of -1 is: %d\n", ft_recursive_factorial(-1));
}*/
