/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolkman <rvolkman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:24:39 by rvolkman          #+#    #+#             */
/*   Updated: 2025/03/25 20:10:07 by rvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 0 && str[i] <= 31) || (str[i] == 127)))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	result;

// 	result = ft_str_is_uppercase("~.ai$34i");
// 	printf("%d\n", result);
// 	result = ft_str_is_uppercase("\0");
// 	printf("%d\n", result);
// 	result = ft_str_is_uppercase("");
// 	printf("%d\n", result);

// 	return (0);
// }
