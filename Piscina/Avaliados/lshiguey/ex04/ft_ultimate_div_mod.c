/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:43:11 by lshiguey          #+#    #+#             */
/*   Updated: 2025/03/21 14:47:29 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a / *b;
	r = *a % *b;
	*a = d;
	*b = r;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	d;
	int	r;

	d = 451;
	r = 10;
	a = &d;
    b = &r;

	printf("---------------------------void1\n");
	printf(" a: %p\n",  a);
	printf("&a: %p\n", &a);
	printf("*a: %d\n", *a);		
	printf(" b: %p\n",  b);
	printf("&b: %p\n", &b);
	printf("*b: %d\n", *b);		
	printf(" d: %d\n",  d);
	printf("&d: %p\n", &d);
	printf(" r: %d\n",  r);
	printf("&r: %p\n", &r);	
	ft_ultimate_div_mod(a, b);
	printf("---------------------------void1\n");
	printf(" a: %p\n",  a);
	printf("&a: %p\n", &a);
	printf("*a: %d\n", *a);		
	printf(" b: %p\n",  b);
	printf("&b: %p\n", &b);
	printf("*b: %d\n", *b);		
	printf(" d: %d\n",  d);
	printf("&d: %p\n", &d);
	printf(" r: %d\n",  r);
	printf("&r: %p\n", &r);	
}*/
