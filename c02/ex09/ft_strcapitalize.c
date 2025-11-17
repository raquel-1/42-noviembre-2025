/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:07:42 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/17 15:26:27 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 #include <stdio.h>
*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] < 48)
			str[i] = str[i] - 32;
		if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] > 48)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("before: %s\n", src);
	ft_strcapitalize(src);
	printf("after: %s\n", src);
	return (0);
}*/
