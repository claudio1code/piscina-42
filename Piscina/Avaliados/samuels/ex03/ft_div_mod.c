/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssiqueir <ssiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:56:48 by ssiqueir          #+#    #+#             */
/*   Updated: 2025/03/23 17:11:21 by ssiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
// int main(void)
// {
// 	int a = 10;
// 	int b = 3;
// 	int div;
// 	int mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("Divisao: %d\n", div);
// 	printf("Resto: %d\n", mod);
// 	return 0;
// }