/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:18:26 by clados-s          #+#    #+#             */
/*   Updated: 2025/04/01 19:02:25 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!str || !to_find)
		return ((void *)0);
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != '\0' && (str[i + j] == to_find[j]))
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return ((void *)0);
}

#include <string.h>
#include <stdio.h>
int    main(void)
{
    char    *str1 = "Hello world! worldus magnus";
    char    *str2 = "m";

    printf("meu: %s\n", ft_strstr(str1, str2));
    printf("std: %s\n", strstr(str1, str2));
    return (0);
}