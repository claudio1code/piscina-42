/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-mour <jde-mour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:06:28 by jde-mour          #+#    #+#             */
/*   Updated: 2025/04/02 11:13:48 by jde-mour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*uppercase;
// 	char	*other;
// 	char	*empty;

// 	uppercase = "OLA";
// 	other = "oi789";
// 	empty = "";
// 	printf("%d\n", ft_str_is_uppercase(uppercase));
// 	printf("%d\n", ft_str_is_uppercase(other));
// 	printf("%d\n", ft_str_is_uppercase(empty));
// 	return (0);
// }
