/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:33:27 by joribeir          #+#    #+#             */
/*   Updated: 2025/03/29 11:34:53 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
int	main(void)
{
	int a = 7;
	int b = 9;
	printf("A: %d\nB: %d\n", a, b);
	ft_swap(&a, &b);
	printf("A: %d\nB: %d", a, b);
	return (0);
}
