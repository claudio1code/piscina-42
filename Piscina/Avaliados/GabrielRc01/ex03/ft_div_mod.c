/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:12:52 by grodrig2          #+#    #+#             */
/*   Updated: 2025/03/27 10:48:55 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 3;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\nmod: %d", div, mod);
	return(0);
}
