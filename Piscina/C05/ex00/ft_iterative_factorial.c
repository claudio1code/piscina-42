/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 09:16:27 by clados-s          #+#    #+#             */
/*   Updated: 2025/04/02 11:57:14 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact_nbr;

	fact_nbr = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		fact_nbr = fact_nbr * nb;
		nb--;
	}
	return (fact_nbr);
}

// #include <stdio.h>
// int main()
// {
//     int num = 2;
//     printf("Fatorial de %d = %d\n", num, ft_iterative_factorial(num));
//     return 0;
// }