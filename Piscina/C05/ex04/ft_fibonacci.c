/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:15 by clados-s          #+#    #+#             */
/*   Updated: 2025/04/03 20:12:17 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int main(void)
{
	printf("%d", ft_fibonacci(5));
	return (0);
}