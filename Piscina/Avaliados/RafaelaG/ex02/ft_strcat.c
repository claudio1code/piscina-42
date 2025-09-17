/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:22:52 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/03/30 19:50:19 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>
// #include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char	st1[20] = "hello, ";
// 	char	st1_1[20] = "hello, ";
// 	char	st2[] = "world!";

// 	ft_strcat(st1, st2);
// 	printf("Resultado: %s\n", st1);
// 	printf("Original: %s\n", strcat(st1_1, st2));
// 	return 0;
// }