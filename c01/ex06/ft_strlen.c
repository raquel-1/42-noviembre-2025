/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:37:43 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/10 13:18:57 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
/*
int	main(void)
{
	char	string[4];
	int	length;

	string[0] = 'h';
	string[1] = 'o';
	string[2] = 'l';
	string[3] = 'a';
	length = ft_strlen(string);
	printf("the lenght is: %d\n", length);
	return (0);
}*/
