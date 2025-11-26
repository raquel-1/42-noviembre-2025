/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:13:54 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/26 11:08:10 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb <= 0)
		return (0);
	while ((root * root) <= nb)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("√9 : %d\n", ft_sqrt(9));
	printf("√10 : %d\n", ft_sqrt(10));
	printf("√0 : %d\n", ft_sqrt(0));
	printf("√1 : %d\n", ft_sqrt(1));
	printf("√-1 : %d\n", ft_sqrt(-1));
}*/
