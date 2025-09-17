/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 11:30:05 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/04/01 14:40:26 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	st1[25] = "Hasta la ";
	char	st1_1[25] = "Hasta la ";
	char	st2[] = "vista, baby";
	unsigned int nb = 11;
	
	printf("Original: %s\n", strncat(st1_1, st2, nb));
	ft_strncat(st1, st2, nb);
	printf("Resultado: %s\n", st1);
	
	return (0);
}