/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:33:41 by kaguilar          #+#    #+#             */
/*   Updated: 2025/04/01 13:39:31 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

int main(){
	char	var[] = "nd221ain\0dia";
	int v;

	v = ft_str_is_printable(var);

	if (v == 0)
	{
		write(1, "0", 1);
	}
	if (v == 1)
	{
		write(1, "1", 1);
	}
	write(1, "\n", 2);
}