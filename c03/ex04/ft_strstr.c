/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:28:22 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/17 17:02:36 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
			
	}
}

int main(void)
{
   char *string1 = "needle in a haystack";
   char *string2 = "haystack";
   char *result;
 
   result = strstr(string1,string2);
   /* Result = a pointer to "haystack" */
   printf("%s\n", result);
}
