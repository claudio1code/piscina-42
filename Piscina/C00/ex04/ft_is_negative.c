/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:09:22 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/19 09:11:43 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	if (n < 0)
	{
		letter = 'N';
		write(1, &letter, 1);
	}
	else
	{
		letter = 'P';
		write(1, &letter, 1);
	}
}

// int main(void)
// {
// 	ft_is_negative(-43);
// 	return (0);
// }