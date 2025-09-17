/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopastor <jopastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:57:59 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/30 12:27:46 by jopastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char str1[] = "TO Lowcase";
	char str2[] = "TeStandO aDiCioNar minusculo.";
	char str3[] = "42_TESTANDO_SEUS_LIMITES =)";
    printf("Teste 0, Resultado: %s",ft_strlowcase(str1));
    printf("\nTeste 1, Resultado: %s",ft_strlowcase(str2));
	printf("\nTeste 2, Resultado: %s",ft_strlowcase(str3));
    return (0);
}
*/