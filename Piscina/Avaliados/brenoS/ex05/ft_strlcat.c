/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:18:34 by brensant          #+#    #+#             */
/*   Updated: 2025/03/31 17:08:34 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	if (size == 0)
		return (dest_len + ft_strlen(src));
	if (dest_len >= size)
		return (dest_len + ft_strlen(src));
	while (src[i] && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (size > 0)
		dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}


int	main(void)
{
	char	dest[10] = "Hello";
	char	src[] = "World!";
	size_t	result = ft_strlcat(dest, src, 0);

	printf("Resultado: %s\n", dest);  // Resultado: "Hello, Wor"
	printf("Tamanho retornado: %zu\n", result);  // Tamanho retornado: 13
return (0);
}
