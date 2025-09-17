/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:00:48 by grodrig2          #+#    #+#             */
/*   Updated: 2025/03/27 11:05:28 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	buf;
	int	min;
	int	n;

	min = 0;
	while (min < size - 1)
	{
		n = min + 1;
		while (n < size)
		{
			if (tab[min] > tab[n])
			{
				buf = tab[min];
				tab[min] = tab[n];
				tab[n] = buf;
			}
			n++;
		}
		min++;
	}
}

#include <stdio.h>
int    main(void)
{
    int tab[6] = {5, 2, 3, 4, 1};
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
    ft_sort_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
    return (0);
}
