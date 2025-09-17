/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 11:05:59 by lshiguey          #+#    #+#             */
/*   Updated: 2025/03/18 19:42:54 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int x;
	int y;
	int	t;

	x = 50;
	y = 100;
	a = &x;
	b = &y;
	printf("*a: %d.\n", *a);
	printf("&a: %p.\n", &a);
	printf(" a: %p.\n",  a);
	printf("*b: %d.\n", *b);
	printf("&b: %p.\n", &b);
	printf(" b: %p.\n",  b);
	printf(" x: %d.\n",  x);
	printf("&x: %p.\n", &x);
	printf(" y: %d.\n",  y);
	printf("&y: %p.\n", &y);
	printf(" t: %d.\n",  t);
	printf("&t: %p.\n", &t);
	printf("----------------------\n");
	ft_swap(a, b);
	printf("*a: %d.\n", *a);
	printf("&a: %p.\n", &a);
	printf(" a: %p.\n",  a);
	printf("*b: %d.\n", *b);
	printf("&b: %p.\n", &b);
	printf(" b: %p.\n",  b);
	printf(" x: %d.\n",  x);
	printf("&x: %p.\n", &x);
	printf(" y: %d.\n",  y);
	printf("&y: %p.\n", &y);
	printf(" t: %d.\n",  t);
	printf("&t: %p.\n", &t);
}
*/
