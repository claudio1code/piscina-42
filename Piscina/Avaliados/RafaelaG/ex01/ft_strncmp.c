/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:27:03 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/03/31 18:21:34 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>
// #include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "Helloo";
// 	char s2[] = "Hellooooo";
// 	unsigned int n = 7;

// 	printf("Resultado comparação: %d\n", ft_strncmp(s1, s2, n));
// 	printf("Original: %d\n", strncmp(s1, s2, n));
// }
