/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 09:41:22 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/31 10:13:24 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// 
// int main(void)
// {
// 	char dest[20] = "Hello";
// 	char src[] = " World";
//
// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// 	return (0);
// }