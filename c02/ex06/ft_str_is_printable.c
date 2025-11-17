/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:23:09 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/13 12:52:22 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	src[] = "r~ *y";
	char	src1[] = "ü";
	char    src2[] = "  ";
	char    src3[] = "";

	int result1 = ft_str_is_printable(src);
	int result2 = ft_str_is_printable(src1);
	int result3 = ft_str_is_printable(src2);
	int result4 = ft_str_is_printable(src3);
	printf("result1 r~ *y: %d\n", result1);
	printf("result2 ü: %d\n", result2);
	printf("result3 '  ': %d\n", result3);
	printf("result4 '': %d\n", result4);
}*/
