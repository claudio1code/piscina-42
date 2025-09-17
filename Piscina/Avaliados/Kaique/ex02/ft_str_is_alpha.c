/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:35:03 by kaguilar          #+#    #+#             */
/*   Updated: 2025/04/01 13:37:47 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int		a;
	char	*s;

	a = 0;
	s = str;
	while (s[a] != '\0')
	{
		if (!(s[a] >= 'a' && s[a] <= 'z' )
			&& !(s[a] >= 'A' && s[a] <= 'Z'))
			return (0);
		a++;
	}
	return (1);
}

int main(){
	char var[] = "a";
	int b;

	b = ft_str_is_alpha(var);

	if (b == 1)
	{
		write(1, "1", 1);
	}
	if (b == 0)
	{
	write(1, "0", 1);
	}

	write(1, "\n", 2);
}