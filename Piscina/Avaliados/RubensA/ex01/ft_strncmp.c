/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubalmei <rubalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:47:07 by rubalmei          #+#    #+#             */
/*   Updated: 2025/04/01 12:14:03 by rubalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void) {
	char str1[4] = "abcd";
	char str2[4] = "abcd";
	printf("String Igual = %d\n", ft_strncmp(str1, str2, 1));
	char str3[4] = "abcd";
	char str4[4] = "bacd";
	printf("String Maior Lexograficamente = %d\n", ft_strncmp(str3, str4, 2));
	char str5[4] = "bacd";
	char str6[4] = "abcd";
	printf("String Menor Lexograficamente = %d\n", ft_strncmp(str5, str6, 3));
	return 0;
}*/
