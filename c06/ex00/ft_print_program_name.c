/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:03:53 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/26 17:29:37 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str)
{
	int		i;
	char	l;

	i = 0;
	while (str[i] != '\0')
	{
		l = str[i];
		write(1, &l, 1);
		i++;
	}
	write(1, "\n ", 1);
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
		print_str(argv[0]);
	return (0);
}
