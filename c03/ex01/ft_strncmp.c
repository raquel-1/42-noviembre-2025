/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:24:25 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/16 22:37:14 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
max n compare
0 → strings are equal
< 0 → str1 is less than str2
> 0 → str1 is greater than str2
compare ascii values -> s1 - s2*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    printf("%d\n", ft_strncmp("apple", "apricot", 2));//0
    printf("%d\n", ft_strncmp("cater", "cat", 2));//0
    printf("%d\n", ft_strncmp("hello", "hello", 4));// 0
}*/
