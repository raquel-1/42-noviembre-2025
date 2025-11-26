/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:45:36 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/25 12:14:58 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power >= 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("2²: %d\n", ft_iterative_power(2,2));
	printf("2⁻9: %d\n", ft_iterative_power(2,-9));
	printf("0⁰: %d\n", ft_iterative_power(0,0));
	printf("2⁰: %d\n", ft_iterative_power(2,0));
	return(0);
}*/
