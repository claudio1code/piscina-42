/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssiqueir <ssiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:34:17 by ssiqueir          #+#    #+#             */
/*   Updated: 2025/03/20 11:37:00 by ssiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int main() {
//     int x = 5, y = 10;
//     printf("Antes da troca: x = %d, y = %d\n", x, y); 
//     ft_swap(&x, &y); 
//     printf("Após a troca: x = %d, y = %d\n", x, y);
//     return 0;
// }
