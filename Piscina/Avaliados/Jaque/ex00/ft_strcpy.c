/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:57:42 by jde-mour          #+#    #+#             */
/*   Updated: 2025/04/02 13:52:14 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
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

int	main(void)
{
	char	*src;
	char	dest[50];

	src = "   gggg";
	ft_strcpy(dest, src);
	printf("Após copiar, dest = %s\n", dest);
	strcpy(dest, src);
	printf("Após copiar, dest = %s", dest);
	return (0);
}
