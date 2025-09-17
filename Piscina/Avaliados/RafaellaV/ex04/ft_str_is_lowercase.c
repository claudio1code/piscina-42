/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolkman <rvolkman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:56:03 by rvolkman          #+#    #+#             */
/*   Updated: 2025/03/25 15:23:46 by rvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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

// 	result = ft_str_is_lowercase("aiaiai");
// 	printf("%d\n", result);
// 	result = ft_str_is_lowercase("AU");
// 	printf("%d\n", result);
// 	result = ft_str_is_lowercase("a6*&$#");
// 	printf("%d\n", result);
// 	result = ft_str_is_lowercase("");
// 	printf("%d\n", result);

// 	return (0);
// }
