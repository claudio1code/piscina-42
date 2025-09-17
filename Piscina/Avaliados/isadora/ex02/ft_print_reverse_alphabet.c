/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ighannam <ighannam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:42:49 by ighannam          #+#    #+#             */
/*   Updated: 2025/03/13 12:48:14 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 122;
	while (letter >= 97)
	{
		write (1, &letter, 1);
		letter--;
	}
}
int main()
{
	ft_print_reverse_alphabet();
	return(0);
}
