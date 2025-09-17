/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:30:06 by brensant          #+#    #+#             */
/*   Updated: 2025/03/25 13:36:13 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}


int	main(void)
{
	char	str1[20] = "Hello ";
	char	str2[20] = "Hello ";
	char	*str3 = "world!";

	ft_strncat(str1, str3, 0);
	strncat(str2, str3, 1);
	printf("meu: %s\n", str1);
	printf("std: %s\n", str2);
	return (0);
}

