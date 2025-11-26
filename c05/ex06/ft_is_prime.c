/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:12:20 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/26 12:46:22 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
To determine whether a number is prime, you only need to check whether 
it is divisible by other integers up to its square root.*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("1 : %d\n", ft_is_prime(1));
	printf("2 : %d\n", ft_is_prime(2));
	printf("3 : %d\n", ft_is_prime(3));
	printf("4 : %d\n", ft_is_prime(4));
	printf("5 : %d\n", ft_is_prime(5));
	printf("10 : %d\n", ft_is_prime(10));
	printf("11 : %d\n", ft_is_prime(11));
}*/
