/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:55:34 by raqroca-          #+#    #+#             */
/*   Updated: 2025/11/11 11:04:58 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	small;
	int	length_i;
	int	i_small;
	int	j;
	int	change;

	i_small = 0;
	length_i = size - 1;
	while (i_small < length_i)
	{
		small = i_small;
		j = i_small;
		while (j < size)
		{
			if (tab[j] < tab[small])
				small = j;
			j++;
		}
		change = tab[i_small];
		tab[i_small] = tab[small];
		tab[small] = change;
		i_small++;
	}
}
/*
int	main(void)
{
	int	numbers[4];

	numbers[0] = -1;
	numbers[1] = 42;
	numbers[2] = 0;
	numbers[3] = -20;
	ft_sort_int_tab(numbers, 4);
	for (int i=0; i<4; i++)
	{ 
		printf(" %d\n", numbers[i]);
	}
	return (0);
}*/
