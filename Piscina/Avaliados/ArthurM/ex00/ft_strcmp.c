/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:12:13 by armeneze          #+#    #+#             */
/*   Updated: 2025/04/01 15:34:11 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] == 0)
			return (-1);
		else if (s2[count] == 0)
			return (1);
		else if (s1[count] < s2[count])
			return (-1);
		else if (s1[count] > s2[count])
			return (1);
		else
			count ++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 = "abc";
	char *s2 = "cba";

	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("ft_strcmp: %d\n", strcmp(s1, s2));
}

// void test_strcmp(char *str1, char *str2) {
// 	int result = ft_strcmp(str1, str2);
// 	printf("Comparando: '%s' vs '%s' -> Retorno: %d\n", str1, str2, result);
// }

// int main() {
// // Caso 1: Strings iguais
// 	test_strcmp("hello", "hello"); // Deve retornar 0

// // Caso 2: Primeira string menor que a segunda (ordem lexicográfica)
// 	test_strcmp("abc", "bcd"); // Deve retornar negativo
// 	test_strcmp("apple", "banana"); // Deve retornar negativo
// 	test_strcmp("hello", "hellp"); // Deve retornar negativo

// // Caso 3: Primeira string maior que a segunda (ordem lexicográfica)
// 	test_strcmp("bcd", "abc"); // Deve retornar positivo
// 	test_strcmp("banana", "apple"); // Deve retornar positivo
// 	test_strcmp("hellp", "hello"); // Deve retornar positivo

// //Caso 4: Strings de tamanhos diferentes, mas prefixo igual
// 	test_strcmp("hello", "hello world"); // Deve retornar negativo
// 	test_strcmp("hello world", "hello"); // Deve retornar positivo

// // Caso 5: Comparando strings vazias
// 	test_strcmp("", ""); // Deve retornar 0
// 	test_strcmp("", "a"); // Deve retornar negativo
// 	test_strcmp("a", ""); // Deve retornar positivo

// 	return 0;
// }
