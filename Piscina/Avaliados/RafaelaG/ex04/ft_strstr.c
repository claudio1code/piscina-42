/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:44:44 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/04/01 14:43:58 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_size_to_find(char *to_find)
{
	int	count;

	count = 0;
	while (to_find[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	size = ft_size_to_find(to_find);
	if (size == 0)
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (j == size)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	src[18] = "existe amor em sp";
	char	src_1[18] = "existe amor em sp";
	char	find[7] = "existe\n";
	char	*res = ft_strstr(src, find);
	printf("Resultado: %s\n", res);
	printf("Original: %s\n", strstr(src_1, find));
	return (0);
}