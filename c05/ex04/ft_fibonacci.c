/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:26:19 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/26 11:11:03 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
int	main(void)
{
	printf("10: %d\n", ft_fibonacci(10));
	printf("-1: %d\n", ft_fibonacci(-1));
	printf("0: %d\n", ft_fibonacci(0));
	printf("1: %d\n", ft_fibonacci(1));
	printf("4: %d\n", ft_fibonacci(4));
}*/
