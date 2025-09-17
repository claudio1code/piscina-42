/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:22:08 by kaguilar          #+#    #+#             */
/*   Updated: 2025/04/01 13:41:50 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);
int		ft_alphanum(char x);
int		ft_low(char x);
int		ft_up(char x);

char	*ft_strcapitalize(char *str)
{
	int	v;

	v = 1;
	if (ft_low(*str))
		*str -= 32;
	while (str[v])
	{
		if (!ft_alphanum(str[v - 1]) && ft_low(str[v]))
			str[v] -= 32;
		else if (ft_alphanum(str[v - 1]) && ft_up(str[v]))
			str[v] += 32;
		v++;
	}
	return (str);
}

int	ft_alphanum(char x)
{
	if (!(x >= 'a' && x <= 'z') && !(x >= 'A' && x <= 'Z')
		&& !(x >= '0' && x <= '9'))
		return (0);
	return (1);
}

int	ft_low(char x)
{
	if (!(x >= 'a' && x <= 'z'))
		return (0);
	return (1);
}

int	ft_up(char x)
{
	if (!(x >= 'A' && x <= 'Z'))
		return (0);
	return (1);
}

int main()
{
	char var[] = "oi, tudo bem? 42Palavras QUARENTA-e-duas; cinquenta+e+um";
	int t;

	ft_strcapitalize(var);

	t = 0;
	while (var[t] != '\0')
	{
		write(1, &var[t], 1);
		t++;
	}
}