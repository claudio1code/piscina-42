/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnonato- <bnonato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:38:27 by bnonato-          #+#    #+#             */
/*   Updated: 2025/03/16 19:07:04 by bnonato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print_char(int line, int column, int x, int y)
{
	if (line == 0)
	{
		if (column == 0 || column == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (line < y - 1)
	{
		if (column == 0 || column == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
	else
	{
		if (column == 0 || column == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	if (x <= 0 || y <= 0)
	{
		write(1, "Valor Incompativel", 19);
		return ;
	}
	line = 0 ;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			print_char(line, column, x, y);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
