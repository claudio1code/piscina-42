/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:43:24 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/20 11:22:54 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void 	ft_putnbr(int nb)
{
	char	nbr; 
	if (nb < 9)
	{
		ft_putnbr(nb / 10);
		write(1, nbr, 1);
		ft_putnbr(nb % 10);
	}	
}

int main (void)
{
	ft_putnbr(42);
	return (0);
}