/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 07:10:23 by joribeir          #+#    #+#             */
/*   Updated: 2025/03/29 11:32:43 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}
// int	main()
// {
// 	int tab[] = {1, 5, 7, 8, 9, 6};
// 	int size = 6;

// 	write(1, "first: 1 5 7 8 9 6\n", 20);

// 	ft_rev_int_tab(tab, size);
// 	write(1, "second: 6 9 8 7 5 1\n", 21);
// 	return (0);
// }
