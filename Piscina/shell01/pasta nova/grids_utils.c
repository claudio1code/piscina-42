/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grids_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:21:46 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/23 19:22:00 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	empty_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	print_grid(int grid[4][4])
{
	int		row;
	int		col;
	char	number;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (grid[row][col] == 0)
				write(1, "0 ", 2);
			else
			{
				number = grid[row][col] + '0';
				write(1, &number, 1);
				if (col < 3)
					write(1, " ", 1);
			}
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}