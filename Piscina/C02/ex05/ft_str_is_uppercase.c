/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:47:33 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/26 13:19:38 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
// 	result = ft_str_is_uppercase(a);
// 	printf("%d", result);
// }
