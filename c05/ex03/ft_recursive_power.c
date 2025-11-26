/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:15:37 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/26 11:09:42 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("2²: %d\n", ft_recursive_power(2,2));
	printf("2⁻9: %d\n", ft_recursive_power(2,-9));
	printf("0⁰: %d\n", ft_recursive_power(0,0));
	printf("2⁰: %d\n", ft_recursive_power(2,0));
	return(0);
}*/
