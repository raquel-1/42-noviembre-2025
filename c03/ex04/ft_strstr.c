/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:28:22 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/18 17:08:22 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char string1[] = "needle in a haystack";
	char string2[] = "haystack";
	char *result1;
	result1 = ft_strstr(string1, string2);
	printf("1: Buscar '%s' en '%s'. Result: %s\n", string2, string1, result1);

	char string3[] = "hello world";
	char string4[] = "world";
	char *result2;
	result2 = ft_strstr(string3, string4);
	printf("2: Buscar '%s' en '%s'. Result: %s\n", string4, string3, result2);

	char string5[] = "programming";
	char string6[] = "gram";
	char *result3;
	result3 = ft_strstr(string5, string6);
	printf("3: Buscar '%s' en '%s'. Result: %s\n", string6, string5, result3);

	char string7[] = "no coincidencia";
	char string8[] = "xyz";
	char *result4;
	result4 = ft_strstr(string7, string8);
	printf("4: Buscar '%s' en '%s'. Result: %s\n", string8, string7, result4);

	char string9[] = "cadena vacia en busqueda";
	char string10[] = "";
	char *result5;
	result5 = ft_strstr(string9, string10);
	printf("5: Buscar '%s' en '%s'. Result: %s\n", string10, string9, result5);

	char string11[] = "";
	char string12[] = "cadena vacia";
	char *result6;
	result6 = ft_strstr(string11, string12);

	printf("6: Buscar '%s' en '%s'. "
		"Result: %s\n", string12, string11, (result6 ? result6 : "NULL"));
	return (0);
}*/
