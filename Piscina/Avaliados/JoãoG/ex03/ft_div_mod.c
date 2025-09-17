/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joribeir <joribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:25:32 by joribeir          #+#    #+#             */
/*   Updated: 2025/03/24 04:43:32 by joribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include<stdio.h>*/
/*int	main(void)
{
	int	a = 15;
	int	b = 7;
	int	div, mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
	return (0);
}*/
