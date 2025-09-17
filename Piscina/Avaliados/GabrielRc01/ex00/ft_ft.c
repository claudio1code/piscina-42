/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 09:50:40 by grodrig2          #+#    #+#             */
/*   Updated: 2025/03/27 10:40:14 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 0;
	ft_ft(&nb);
	printf("%d", nb);
	return (0);
}
