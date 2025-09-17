/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-mour <jde-mour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:17:52 by jde-mour          #+#    #+#             */
/*   Updated: 2025/04/02 11:15:18 by jde-mour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*printable;
// 	char	*other;
// 	char	*empty;

// 	printable = "aiou!";
// 	other = "oo\tla";
// 	empty = "";
// 	printf("%d\n", ft_str_is_printable(printable));
// 	printf("%d\n", ft_str_is_printable(other));
// 	printf("%d\n", ft_str_is_printable(empty));
// 	return (0);
// }
