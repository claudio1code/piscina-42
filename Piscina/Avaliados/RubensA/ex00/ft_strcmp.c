/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:44:22 by rubalmei          #+#    #+#             */
/*   Updated: 2025/04/02 15:02:39 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] != s2[i])

		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main(void) {
	char str1[4] = "abcd";
	char str2[4] = "abcd";
	printf("String Igual = %d\n", ft_strcmp(str1, str2));
	char str3[4] = "abcd";
	char str4[4] = "bacd";
	printf("String Diferente Maior Lexograficamente = %d\n", ft_strcmp(str3, str4));
	char str5[4] = "bacd";
	char str6[4] = "abcd";
	printf("String Diferente Menor Lexograficamente = %d\n", ft_strcmp(str5, str6));
	return 0;
}*/
