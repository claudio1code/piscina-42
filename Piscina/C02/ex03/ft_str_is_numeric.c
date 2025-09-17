/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:26:14 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/26 13:16:35 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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
// 	a = "";
// 	result = ft_str_is_numeric(a);
// 	printf("%d", result);
// }
