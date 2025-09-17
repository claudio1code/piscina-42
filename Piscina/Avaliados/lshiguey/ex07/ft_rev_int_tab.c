/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:43:57 by lshiguey          #+#    #+#             */
/*   Updated: 2025/03/21 15:08:20 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	count;
	int	div;

	count = size;
	count--;
	div = size / 2;
	i = 0;
	while (i < div)
	{
		temp = tab[i];
		tab[i] = tab[count];
		tab[count] = temp;
		i++;
		count--;
	}
}
/*
int	main(void)
{
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int	i;
	int	size;

	size = 10;
	i = 0;
	while (i < size)
	{
		printf("%d: ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d: ", tab[i]);
		i++;
	}
	return (0);
}*/