/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:44:44 by armeneze          #+#    #+#             */
/*   Updated: 2025/04/01 14:27:14 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	len;
	int	count;
	int	max_size;

	len = ft_strlen(dest) - 1;
	count = 0;
	if (len <= 0)
		return (ft_strlen(src) + len);
	while (src[count] != '\0' && count < size)
	{
		dest[len + count] = src[count];
		count ++;
	}
	dest[count] = '\0';
	max_size = ft_strlen(src) + len;
	return (max_size);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[50] = "Olá, ";
//     char src[] = "mundo!";
//     size_t max_size = sizeof(dest);
//     printf("String original dest: %s\n", dest);
//     printf("String a ser concatenada: %s\n", src);

//     // Concatenando src em dest com segurança
//     size_t result = ft_strlcat(dest, src, max_size);

//     printf("String após strlcat: %s\n", dest);
//     printf("Tamanho total que a string concatenada teria: %zu\n", result);

//     return 0;
// }
