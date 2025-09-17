/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolkman <rvolkman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:56:03 by rvolkman          #+#    #+#             */
/*   Updated: 2025/03/25 15:23:39 by rvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	result;

// 	result = ft_str_is_uppercase("aiaiai");
// 	printf("%d\n", result);
// 	result = ft_str_is_uppercase("AU");
// 	printf("%d\n", result);
// 	result = ft_str_is_uppercase("a6*&$#");
// 	printf("%d\n", result);
// 	result = ft_str_is_uppercase("");
// 	printf("%d\n", result);

// 	return (0);
// }
