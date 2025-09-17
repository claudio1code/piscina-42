/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopastor <jopastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:04:36 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/28 17:49:27 by jopastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("Teste 0: Resultado: %d", ft_str_is_uppercase("aaaBB"));
	printf("\nTeste 1: Resultado: %d", ft_str_is_uppercase(""));
	printf("\nTeste 2: Resultado: %d", ft_str_is_uppercase("ABCDEFG"));
	return (0);
}
*/