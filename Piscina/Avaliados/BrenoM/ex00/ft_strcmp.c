/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:59:36 by brmartin          #+#    #+#             */
/*   Updated: 2025/04/03 20:48:31 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
    // Caso 1: Strings idênticas
    char str1[6] = "Hello";
    char str2[6] = "Hello";
    printf("%d\n", str1, str2, ft_strcmp(str1, str2)); // Esperado: 0

    // Caso 2: Strings com um caractere diferente
    char str3[6] = "Hello";
    char str4[6] = "Hellz";
    printf("%d\n", str3, str4, ft_strcmp(str3, str4));
    // Esperado: -1 (pois 'o' < 'z')

    // Caso 3: Strings com tamanhos diferentes
    char str5[6] = "Hello";
    char str6[4] = "Hel\0";
    printf("%d\n", str5, str6, ft_strcmp(str5, str6));
    // Esperado: 1 (pois 'l' > '\0')

    // Caso 4: String com um caractere diferente no meio
    char str7[6] = "Hella";
    char str8[6] = "Hello";
    printf("%d\n", str7, str8, ft_strcmp(str7, str8));
    // Esperado: -1 (pois 'a' < 'o')

    // Caso 5: strings de tamanhos difrnt, onde uma é prefixo da outra
    char str9[6] = "Hi";
    char str10[10] = "Hiiii";
    printf("%d\n", str9, str10, ft_strcmp(str9, str10)); // Esperado: -1
    return 0;
}
*/
