/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:55:38 by grodrig2          #+#    #+#             */
/*   Updated: 2025/03/27 10:44:41 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	buf;

	buf = *a;
	*a = *b;
	*b = buf;
}

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	a = 15;
	b = 42;
	printf("numero a: %d\nnumero b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("numero a: %d\nnumero b: %d", a, b);
	return(0);
}
