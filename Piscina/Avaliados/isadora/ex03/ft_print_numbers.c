/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ighannam <ighannam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:56:27 by ighannam          #+#    #+#             */
/*   Updated: 2025/03/13 12:51:57 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = 48;
	while (digit <= 57)
	{
		write (1, &digit, 1);
		digit++;
	}
}
int main()
{
	ft_print_numbers();
	return(0);
}
