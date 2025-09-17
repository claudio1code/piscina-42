/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ighannam <ighannam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 08:48:16 by ighannam          #+#    #+#             */
/*   Updated: 2025/03/13 12:43:27 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter <= 122)
	{
		write (1, &letter, 1);
		letter++;
	}
}
int main()
{
	ft_print_alphabet();
	return(0);
}
