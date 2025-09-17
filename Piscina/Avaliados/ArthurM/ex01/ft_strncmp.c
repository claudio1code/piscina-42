/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:56:10 by armeneze          #+#    #+#             */
/*   Updated: 2025/04/01 14:26:37 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	count;

	count = 0;
	if (s1[0] == '\0' && s2[0] == '\0' || count < n)
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

// #include <stdio.h>
// #include <string.h>

// void test_strncmp(const char *str1, const char *str2, size_t n) {
//     int result = strncmp(str1, str2, n);
//     printf("Comparando: '%s' vs '%s' 
//com n=%zu -> Retorno: %d\n", str1, str2, n, result);
// }

// int main() {
//     // Caso 1: Strings iguais dentro do limite
//     test_strncmp("hello", "hello", 5); // Deve retornar 0
//     test_strncmp("hello", "hello world", 5); // Deve retornar 0

//     // Caso 2: Primeira string menor que a segunda dentro do limite
//     test_strncmp("abc", "bcd", 2); // Deve retornar negativo
//     test_strncmp("apple", "banana", 3); // Deve retornar negativo
//     test_strncmp("hello", "hellp", 4); 
//     test_strncmp("hello", "hellp", 5); // Deve retornar negativo

//     // Caso 3: Primeira string maior que a segunda dentro do limite
//     test_strncmp("bcd", "abc", 2); // Deve retornar positivo
//     test_strncmp("banana", "apple", 3); // Deve retornar positivo
//     test_strncmp("hellp", "hello", 4); 
//     test_strncmp("hellp", "hello", 5); // Deve retornar positivo

//     // Caso 4: Strings de tamanhos diferentes, mas prefixo igual
//     test_strncmp("hello", "hello world", 10); // Deve retornar negativo
//     test_strncmp("hello world", "hello", 10); // Deve retornar positivo

//     // Caso 5: Comparando strings vazias
//     test_strncmp("", "", 3); // Deve retornar 0
//     test_strncmp("", "a", 1); // Deve retornar negativo
//     test_strncmp("a", "", 1); // Deve retornar positivo

//    return 0;
// }