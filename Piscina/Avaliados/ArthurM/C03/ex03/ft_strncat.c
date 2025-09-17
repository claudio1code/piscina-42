/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:15:55 by armeneze          #+#    #+#             */
/*   Updated: 2025/03/27 15:25:48 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	count;

	count = 0;
	while (dest[count])
	{
		count ++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	end_dest;
	int	count;

	end_dest = ft_strlen(dest);
	count = 0;
	while (src[count] == '\0' || count < nb)
	{
		dest[end_dest + count] = src[count];
		count ++;
	}
	return (dest);
}

// #include <stdio.h>
// void test_strcat(char *dest, char *src) {
// 	printf("Antes: '%s'\n", dest);
// 	ft_strncat(dest, src, 6);
// 	printf("Depois: '%s'\n", dest);
// }

// int main() {
// // Caso 1: Concatenando duas strings comuns
// 	char buffer1[20] = "Hello";
// 	test_strcat(buffer1, " beautifol word");
// // Caso 2: Concatenando uma string vazia
// 	char buffer2[20] = "Hello";
// 	test_strcat(buffer2, "");

// // Caso 3: Concatenando em uma string vazia
// 	char buffer3[20] = "";
// 	test_strcat(buffer3, "Hello");

// // Caso 4: Tentando concatenar além do limite do buffer
// 	char buffer4[10] = "Hi";
// 	test_strcat(buffer4, " thersdgsdge!"); // Deve evitar overflow

// 	return 0;
// }
