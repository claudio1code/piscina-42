/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:39:23 by kaguilar          #+#    #+#             */
/*   Updated: 2025/04/01 13:44:23 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	a;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	a = 0;
	while (a < size - 1 && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	if (size > 0)
	{
		dest[a] = '\0';
	}
	return (src_len);
}

int main()
{
	char	src[] = "Boa sorte na 42!";
	char	dest[10];
	unsigned int	size = sizeof(dest);

	unsigned int tamanho_strin = ft_strlcpy(dest, src, size);

	printf("String copiada: %s\n", dest);
	printf("String copiada: %u\n", tamanho_strin);

	return 0;
}
