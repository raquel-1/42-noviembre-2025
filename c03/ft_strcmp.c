/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:47:16 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/16 22:18:36 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
0 → strings are equal
< 0 → str1 is less than str2
> 0 → str1 is greater than str2
compare ascii values -> s1 - s2*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("apple", "apricot"));//-
	printf("%d\n", ft_strcmp("cater", "cat"));//+
	printf("%d\n", ft_strcmp("hello", "hello"));// 0
}*/
