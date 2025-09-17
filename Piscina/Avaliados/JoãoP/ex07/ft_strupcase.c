/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopastor <jopastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:57:59 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/28 17:52:28 by jopastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{	
	char str1[] = "to uppercase";
	char str2[] = "Testando adicionar maiusculo.";
	char str3[] = "42_testando_seus_limites =)";
    printf("Teste 0, Resultado: %s",ft_strupcase(str1));
    printf("\nTeste 1, Resultado: %s",ft_strupcase(str2));
	printf("\nTeste 2, Resultado: %s",ft_strupcase(str3));
    return (0);
}
*/