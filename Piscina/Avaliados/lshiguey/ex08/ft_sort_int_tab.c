/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:25:21 by lshiguey          #+#    #+#             */
/*   Updated: 2025/03/24 13:29:30 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i1;
	int	i2;
	int	temp;

	i1 = 0;
	i2 = 1;
	while (i1 < size)
	{
		while (i2 < size)
		{
			if (tab[i1] > tab[i2])
			{
				temp = tab[i1];
				tab[i1] = tab[i2];
				tab[i2] = temp;
			}
			i2++;
		}
		i1++;
		i2 = i1;
	}
}

// int	main(void)
// {
// 	int	tab[10] = {7, 3, 2, 9, 5, 6, 1, 8, 4, 0};
// 	int	i;
// 	int	size;

// 	size = 10;
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d: ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d: ", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
