/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:22:26 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/23 19:23:52 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_ascending(int grid[4][4], int is_row, int index)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (is_row)
		{
			grid[index][i] = i + 1;
		}
		else
		{
			grid[i][index] = i + 1;
		}
		i++;
	}	
}

void	fill_descending(int grid[4][4], int is_row, int index)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (is_row)
		{
			grid[index][i] = 4 - i;
		}
		else
		{
			grid[i][index] = 4 - i;
		}
		i++;
	}
}

void	place_four(int grid[4][4], int direction, int index)
{
	if (direction == 0)
		grid[0][index] = 4;
	else if (direction == 1)
		grid[3][index] = 4;
	else if (direction == 2)
		grid[index][0] = 4;
	else if (direction == 3)
		grid[index][3] = 4;
}

void	fill_clues(int grid[4][4], int clues[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (clues[0][i] == 1)
			place_four(grid, 0, i);
		else if (clues[0][i] == 4)
			fill_ascending(grid, 0, i);
		if (clues[1][i] == 1)
			place_four(grid, 1, i);
		else if (clues[1][i] == 4)
			fill_descending(grid, 0, i);
		if (clues[2][i] == 1)
			place_four(grid, 2, i);
		else if (clues[2][i] == 4)
			fill_ascending(grid, 1, i);
		if (clues[3][i] == 1)
			place_four(grid, 3, i);
		else if (clues[3][i] == 4)
			fill_descending(grid, 1, i);
		i++;
	}
}