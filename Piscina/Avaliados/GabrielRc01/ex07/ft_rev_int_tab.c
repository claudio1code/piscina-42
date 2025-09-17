/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:52:33 by grodrig2          #+#    #+#             */
/*   Updated: 2025/03/27 11:00:58 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	buf;
	int	n;

	n = 0;
	while (n < size / 2)
	{
		buf = tab[n];
		tab[n] = tab[size - 1 - n];
		tab[size - 1 - n] = buf;
		n++;
	}
}
#include <stdio.h>
int main(void)
{
    int nbr[5] = {1, 2, 3, 4, 5};
	printf("%d, %d, %d, %d, %d\n", nbr[0], nbr[1], nbr[2], nbr[3], nbr[4]);
    ft_rev_int_tab(nbr, 5);
	printf("%d, %d, %d, %d, %d", nbr[0], nbr[1], nbr[2], nbr[3], nbr[4]);
}
