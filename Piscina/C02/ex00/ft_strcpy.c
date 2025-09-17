/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:22:03 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/26 11:17:10 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[50];
// 	char *src;
// 	src = "Hello World!";
// 	ft_strcpy(dest, src);
// 	printf("%s", dest);
// 	return (0);
// }