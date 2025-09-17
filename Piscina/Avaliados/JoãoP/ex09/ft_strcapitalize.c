/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:12:11 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/30 13:57:07 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_letter;

	i = 0;
	is_first_letter = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (is_first_letter && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!is_first_letter && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			is_first_letter = 0;
		}
		else
			is_first_letter = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{	
	char	str[] = "Oi, tUdo bem? 42palavras quarenta-e-duas; QUARENTA+e+um";	
	char	str2[] = "sobrevivendo na 42sp";

	printf("Teste [0] Resultado: %s", ft_strcapitalize(str));
	printf("\nTeste [1] Resultado: %s", ft_strcapitalize(str2));
	return (0);
}
