/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:34:57 by clados-s          #+#    #+#             */
/*   Updated: 2025/04/03 12:56:53 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 0;
	if (nb < 0)
		return (0);
	while (sqr * sqr <= nb)
	{
		if (sqr * sqr == nb)
			return (sqr);
		sqr++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_sqrt(16));
// 	return (0);
// }