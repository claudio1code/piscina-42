/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:20:27 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/23 19:55:27 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

// Protótipos das funções
int	validate_input(char *input);
int	init_param(char *input, int clues[4][4]);
int	ft_input(char *string);
void	empty_grid(int grid[4][4]);
void	fill_clues(int grid[4][4], int clues[4][4]);
void	print_grid(char **argv);

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	clues[4][4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (validate_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (init_param(argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ft_input(argv[1]) == 0)
	{
		return (0);
	}
	empty_grid(grid);
	fill_clues(grid, clues);
	print_grid(argv);
	return (0);
}