/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:42:42 by rsousa-n          #+#    #+#             */
/*   Updated: 2025/04/01 17:05:04 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int count;
	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
}
int main(void)
{
	ft_putstr("aeaeae\n\n");
	return (0);
}