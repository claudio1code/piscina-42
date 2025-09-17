/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaguilar <kaguilar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:16:00 by kaguilar          #+#    #+#             */
/*   Updated: 2025/04/01 12:54:49 by kaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	v;

	v = 0;
	while (str[v] != '\0')
	{
		if (str[v] >= 65 && str[v] <= 90)
			str[v] += 32;
		v++;
	}
	return (str);
}

// int main()
// {
// 	char var[] = "";
// 	int v;

// 	ft_strlowcase(var);

// 	v = 0;
// 	while (var[v] != '\0')
// 	{
// 		write(1, &var[v], 1);
// 		v++;
// 	}
// 	return 0;
// }