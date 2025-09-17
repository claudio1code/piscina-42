/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:43:45 by rvolkman          #+#    #+#             */
/*   Updated: 2025/03/26 14:55:42 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	a;

// 	a = ft_str_is_numeric("098432");
// 	printf("%d\n", a);
// 	a = ft_str_is_numeric("098432a");
// 	printf("%d\n", a);
// 	a = ft_str_is_numeric("");
// 	printf("%d\n", a);
// }
