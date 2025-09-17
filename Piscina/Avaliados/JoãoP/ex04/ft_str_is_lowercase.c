/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:33:53 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/30 13:50:32 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("Teste 0: Resultado: %d", ft_str_is_lowercase("aaaBB"));
	printf("\nTeste 1: Resultado: %d", ft_str_is_lowercase(""));
	printf("\nTeste 2: Resultado: %d", ft_str_is_lowercase("abdefg"));
	return (0);
}
*/