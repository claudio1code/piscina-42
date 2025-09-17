/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:35:52 by jde-mour          #+#    #+#             */
/*   Updated: 2025/04/02 13:58:05 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*number;
// 	char	*other;
// 	char	*empty;

// 	number = "1234";
// 	other = "a2b5n7";
// 	empty = "";
// 	printf("%d\n", ft_str_is_numeric(number));
// 	printf("%d\n", ft_str_is_numeric(other));
// 	printf("%d\n", ft_str_is_numeric(empty));
// 	return (0);
// }
