/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssiqueir <ssiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:05:30 by ssiqueir          #+#    #+#             */
/*   Updated: 2025/03/20 11:41:03 by ssiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// int main()
// {
//     int x = 10, y = 3;
//     printf("Antes da divisão: x = %d, y = %d\n", x, y);
//     ft_ultimate_div_mod(&x, &y);
//     printf("Depois da divisão: x = %d, y = %d\n", x, y);
//    return 0;
// }
