/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:20:18 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/16 17:37:26 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int main(void)
{
	char	src[] = "Hola mundo!";
	char	dest[6];
	unsigned int	len;

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest);
	printf("Longitud de src: %u\n", len);
	return (0);
}*/
