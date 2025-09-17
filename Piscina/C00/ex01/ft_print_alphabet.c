/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:46:40 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/19 10:30:29 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra_a;

	letra_a = 'a';
	while (letra_a <= 'z')
	{
		write(1, &letra_a, 1);
		letra_a++;
	}
}

// int main (void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }