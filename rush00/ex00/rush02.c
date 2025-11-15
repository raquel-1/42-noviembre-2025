/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaizoun <yzaizoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:06:30 by yzaizoun          #+#    #+#             */
/*   Updated: 2025/11/08 21:39:37 by yzaizoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*the line constructor, start is the first char that has to be written, between
as the name says is the char that is written in between the first and last
char and end is the last char that has to be written. The structure is
the same as rush but writes a newline when it finishes*/
void	ft_line_constructor(int x, char start, char between, char end)
{
	ft_putchar(start);
	x--;
	while (x > 1)
	{
		ft_putchar(between);
		x--;
	}
	if (x == 1)
		ft_putchar(end);
	ft_putchar('\n');
}

/*this function says what has to be done in every line, checks if x and y
are + than 0 and then writes the first line, then checks if the line we are
is not the last, finally writes the last line*/
void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_line_constructor(x, 'A', 'B', 'A');
	y--;
	while (y > 1)
	{
		ft_line_constructor(x, 'B', ' ', 'B');
		y--;
	}
	if (y == 1)
		ft_line_constructor(x, 'C', 'B', 'C');
}
