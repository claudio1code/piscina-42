/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaguilar <kaguilar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:25:28 by kaguilar          #+#    #+#             */
/*   Updated: 2025/03/29 16:00:47 by kaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	char	*t;
	int		a;

	t = str;
	a = 0;
	while (t[a] != '\0')
	{
		if (!(t[a] >= 'a' && t[a] <= 'z'))
			return (0);
		a++;
	}
	return (1);
}

// int main(){
// 	char var[] = "asdsa1dfsdaf";
// 	int v;

// 	v = ft_str_is_lowercase(var);
// 	if (v == 0)
// 	{
// 		write(1, "0", 1);
// 	}
// 	if (v == 1)
// 	{
// 		write(1, "1", 1);
// 	}
// 	write(1, "\n", 2);
// }