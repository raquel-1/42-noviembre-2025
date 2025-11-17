/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:20:25 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/13 11:35:42 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	src[] = "heLlOraqUel";
	char	src1[] = "HelloR@quel";
	char    src2[] = "   ";
	char    src3[] = "";

	int result1 = ft_str_is_alpha(src);
	int result2 = ft_str_is_alpha(src1);
	int result3 = ft_str_is_alpha(src2);
	int result4 = ft_str_is_alpha(src3);
	printf("result1 heLlOraqUel: %d\n", result1);
	printf("result2 HelloR@quel: %d\n", result2);
	printf("result3 '   ': %d\n", result3);
	printf("result4 '': %d\n", result4);
}*/
