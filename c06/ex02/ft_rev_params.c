/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:51:00 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/27 11:07:41 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str)
{
	int		i;
	char	w;

	i = 0;
	while (str[i] != '\0')
	{
		w = str[i];
		write(1, &w, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while (i >= 1)
		{
			print_str(argv[i]);
			i--;
		}
	}
	return (0);
}
