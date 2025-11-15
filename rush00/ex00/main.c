/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaizoun <yzaizoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:04:22 by yzaizoun          #+#    #+#             */
/*   Updated: 2025/11/09 20:02:30 by yzaizoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	rush(int x, int y);

/*int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 2;
	rush(x, y);
	return (0);
}*/

/*my atoi converts a string to int same as atoi but if encounters a letter after
the number takes it as an error too*/
int	my_atoi(const char *str)
{
	long	n;
	int		symbol;

	n = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			symbol = -1;
		str++;
	}
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		n = (n * 10) + *str - '0';
		str++;
	}
	if (symbol == -1)
		n = -n;
	if (n > 2147483647 || n < -2147483648)
		return (0);
	return (n);
}

/*this main checks with my atoi the values that the user can give through argv*/
int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(my_atoi(argv[1]), my_atoi(argv[2]));
	return (0);
}
