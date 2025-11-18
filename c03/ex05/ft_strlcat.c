/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:46:52 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/18 18:30:16 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	j;

	len_dest = 0;
	len_src = 0;
	j = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (size + len_src);
	while (src[j] != '\0' && (len_dest + j) < (size - 1))
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	dest[len_dest + j] = '\0';
	return (len_dest + len_src);
}
/*
int main(void)
{
	char	dest1[20] = "Hola ";
	char 	*src = "Mundo!";
	unsigned int size = 15;

	unsigned int r1 = ft_strlcat(dest1, src, size);
	printf("Resultado dest1: \"%s\"\n", dest1);
	printf("Valor retornado ft_strlcat: %u\n\n", r1);

	return 0;
}*/
