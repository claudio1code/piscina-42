/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:38:50 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/30 13:44:16 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char sourceWord[17] = "Hello";
	char destWord[50] = "fkdkffksf";
	ft_strcpy(destWord, sourceWord);
	printf("Teste 0, Retorno: %s", ft_strcpy(destWord, sourceWord));
	return (0);
}
