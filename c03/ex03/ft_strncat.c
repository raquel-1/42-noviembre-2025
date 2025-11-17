/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:58:12 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/17 12:23:58 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest1[50] = "Hola, ";
    char src1[] = "mundo!";
    char dest2[50] = "Programacion ";
    char src2[] = "en C";

    printf("Antes de ft_strncat: %s\n", dest1);
    ft_strncat(dest1, src1, 3);//Hola mun
    printf("Despues de ft_strncat: %s\n\n", dest1);
    printf("Antes de ft_strncat: %s\n", dest2);
    ft_strncat(dest2, src2, 2);// Programacion en
    printf("Despues de ft_strncat: %s\n", dest2);

    return (0);
}*/
