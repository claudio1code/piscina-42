/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmartin <brmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:59:36 by brmartin          #+#    #+#             */
/*   Updated: 2025/04/03 17:56:10 by brmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (n > 0 && src[j])
	{
		dest[i++] = src[j++];
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char dest[50] = "Hello, ";
	char src[] = "Wrld!";
	printf("%s\n", ft_strncat(dest, src, 5));
	return 0;
}
*/
