/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-mour <jde-mour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:49:17 by jde-mour          #+#    #+#             */
/*   Updated: 2025/04/02 11:12:29 by jde-mour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*lowercase;
// 	char	*other;
// 	char	*empty;

// 	lowercase = "abcd";
// 	other = "A34g10";
// 	empty = "";
// 	printf("%d\n", ft_str_is_lowercase(lowercase));
// 	printf("%d\n", ft_str_is_lowercase(other));
// 	printf("%d\n", ft_str_is_lowercase(empty));
// 	return (0);
// }
