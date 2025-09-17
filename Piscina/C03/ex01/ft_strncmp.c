/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:14:14 by clados-s          #+#    #+#             */
/*   Updated: 2025/04/01 11:18:58 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str1[] = "Agrg";
//     char str2[] = "3dffr";
//     int result;
//
//
// 	result = ft_strncmp(str1, str2, 4);
//     if (result == 0)
//         printf("As strings são iguais.\n");
//     else if (result < 0)
//         printf("%s é menor que %s\n", str1, str2);
//     else
//         printf("%s é maior que %s\n", str1, str2);
//     return 0;	
// }
