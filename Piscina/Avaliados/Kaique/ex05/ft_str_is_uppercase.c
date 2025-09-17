/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaguilar <kaguilar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:32:32 by kaguilar          #+#    #+#             */
/*   Updated: 2025/03/29 16:01:20 by kaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	char	*t;
	int		a;

	t = str;
	a = 0;
	while (t[a] != '\0')
	{
		if (!(t[a] >= 'A' && t[a] <= 'Z'))
			return (0);
		a++;
	}
	return (1);
}

// int main()
// {
// 	char	var[] = {"DUSAHDSA"};
// 	int b;

// 	b = ft_str_is_uppercase(var);

// 	if (b == 1)
// 	{
// 		write(1, "1", 1);
// 	}
// 	if (b == 0)
// 	{
// 		write(1, "0", 1);
// 	}
// 	write(1, "\n", 2);
// }