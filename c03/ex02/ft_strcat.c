/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:49:22 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/17 12:22:12 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
/*
int	main(void)
{
	char dest1[50] = "Hola, ";
    char src1[] = "mundo!";
    char dest2[50] = "Programacion ";
    char src2[] = "en C";

    printf("Antes de ft_strcat: %s\n", dest1);
    ft_strcat(dest1, src1);
    printf("Despues de ft_strcat: %s\n\n", dest1);
    printf("Antes de ft_strcat: %s\n", dest2);
    ft_strcat(dest2, src2);
    printf("Despues de ft_strcat: %s\n", dest2);

    return (0);
}*/
