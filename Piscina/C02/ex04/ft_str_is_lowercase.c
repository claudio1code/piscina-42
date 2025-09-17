/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:40:55 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/26 13:16:42 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
	str++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*a;
// 	int	result;
// 	a = "gdghLvm";
// 	result = ft_str_is_lowercase(a);
// 	printf("%d", result);
// }
