/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopastor <jopastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:50:40 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/28 17:36:29 by jopastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	printf("Teste 0: Resultado: %d", ft_str_is_numeric("41948"));
	printf("\nTeste 1: Resultado: %d", ft_str_is_numeric("933as9"));
    printf("\nTeste 2: Resultado: %d", ft_str_is_numeric(""));
	return (0);
}
*/