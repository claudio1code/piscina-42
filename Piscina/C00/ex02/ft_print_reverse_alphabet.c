/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:21:04 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/19 10:30:36 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra_z;

	letra_z = 'z';
	while (letra_z >= 'a')
	{
		write(1, &letra_z, 1);
		letra_z--;
	}
}

// int main (void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }