/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:13:09 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/19 09:11:28 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	pa;
	int	sa;

	pa = 0;
	sa = 1;
	while (pa != 99)
	{
		while (sa != 100)
		{
			ft_putchar((pa / 10) + '0');
			ft_putchar((pa % 10) + '0');
			ft_putchar(' ');
			ft_putchar((sa / 10) + '0');
			ft_putchar((sa % 10) + '0');
			if (!(pa == 98 && sa == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			sa++;
		}
		pa++;
		sa = pa + 1;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }