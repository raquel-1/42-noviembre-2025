/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:39:45 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/24 12:26:05 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
If you do not meet the condition, I will return the character.*/

char	ft_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
if (!in_word) -> in_word == 0*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	in_word;

	i = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i]))
		{
			if (!in_word)
				str[i] = ft_to_upper(str[i]);
			else
				str[i] = ft_to_lower(str[i]);
			in_word = 1;
		}
		else
			in_word = 0;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("Original: %s\n", str);
    printf("Capitalizado: %s\n", ft_strcapitalize(str));
    return (0);
}*/
