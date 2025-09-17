/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:38:31 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/04/01 14:32:36 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0' && s2[i2] != '\0')
	{
		if (s1[i1] > s2[i2] || s1[i1] < s2[i2])
		{
			return (s1[i1] - s2[i2]);
		}
		i1++;
		i2++;
	}
	return (s1[i1] - s2[i2]);
}

int	main(void)
{
	char s1[] = "4anca1a";
	char s2[] = "bancada";

	printf("Resultado comparação: %d\n", ft_strcmp(s1, s2));
	printf("Original: %d\n", strcmp(s1, s2));
	return (0);
}
