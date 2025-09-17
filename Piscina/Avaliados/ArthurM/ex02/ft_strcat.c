/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:17:41 by armeneze          #+#    #+#             */
/*   Updated: 2025/03/27 17:51:56 by armeneze         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	end_dest;
	int	count;

	end_dest = ft_strlen(dest);
	count = 0;
	while (src[count])
	{
		dest[end_dest + count] = src[count];
		count ++;
	}
	return (dest);
}

// void test_strcat(char *dest, const char *src) {
//     printf("Antes: '%s'\n", dest);
//     ft_strcat(dest, src); // Evita overflow
//     printf("Depois: '%s'\n", dest);
// }

// int main() {
//     // Caso 1: Concatenando duas strings comuns
//     char buffer1[20] = "Hello";
//     test_strcat(buffer1, " World");
//     // Caso 2: Concatenando uma string vazia
//     char buffer2[20] = "Hello";
//     test_strcat(buffer2, "");

//     // Caso 3: Concatenando em uma string vazia
//     char buffer3[20] = "";
//     test_strcat(buffer3, "Hello");

//     // Caso 4: Tentando concatenar além do limite do buffer
//     char buffer4[10] = "Hi";
//     test_strcat(buffer4, " there!"); // Deve evitar overflow

//     return 0;
// }
