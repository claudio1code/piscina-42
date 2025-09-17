/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:52:07 by kaguilar          #+#    #+#             */
/*   Updated: 2025/04/01 13:35:55 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char src[] = "Teste.";
	char dest[10];

	ft_strncpy(dest, src, 10);

	printf("String Destino: \"%s\"\n", dest);

	printf("Conteúdo do Destino:\n");
	for (int i = 0; i < 10; i++)
	{
		if (dest[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", dest[i]);
		}
	}
	printf("\n");

	return 0;
}