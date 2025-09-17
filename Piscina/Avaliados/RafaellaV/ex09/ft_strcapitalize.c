/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:28:06 by rvolkman          #+#    #+#             */
/*   Updated: 2025/03/26 15:06:07 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' '
			|| str[i - 1] == '+' || str[i - 1] == '-')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
			str[i] = str[i] - 32;
			}
		}
	i++;
	}
	return (str);
}

int	main(void)
{
	char	a [57] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(a);
	printf("%s\n", a);
	return (0);
}
