/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:20:03 by rvolkman          #+#    #+#             */
/*   Updated: 2025/03/26 14:58:30 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		*dest++ = src++;
		i++;
	}
	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[20];

	src = "123456789";
	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
