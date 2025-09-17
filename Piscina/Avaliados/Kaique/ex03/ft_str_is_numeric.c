/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:11:51 by kaguilar          #+#    #+#             */
/*   Updated: 2025/04/01 13:38:20 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= '0' && str[a] <= '9'))
			return (0);
		a++;
	}
	return (1);
}

int main(){
	char var[] = "123123";
	int b;

	b = ft_str_is_numeric(var);

	if (b == 1)
	{
		write(1, "1", 1);
	}
	if (b == 0)
	{
		write(1, "0", 1);
	}
	write(1, "\n", 2);
}