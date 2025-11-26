/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:10:53 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/26 13:11:06 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	result;

	result = nb;
	while (1)
	{
		if (is_prime(result))
			return (result);
		result++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("1 : %d\n", ft_find_next_prime(1));
	printf("2 : %d\n", ft_find_next_prime(2));
	printf("3 : %d\n", ft_find_next_prime(3));
	printf("4 : %d\n", ft_find_next_prime(4));
	printf("5 : %d\n", ft_find_next_prime(5));
	printf("6 : %d\n", ft_find_next_prime(6));
	printf("7 : %d\n", ft_find_next_prime(7));
	printf("8 : %d\n", ft_find_next_prime(8));
	printf("11 : %d\n", ft_find_next_prime(11));
	printf("12 : %d\n", ft_find_next_prime(12));
}*/
