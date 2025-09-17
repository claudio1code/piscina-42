/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:01:42 by clados-s          #+#    #+#             */
/*   Updated: 2025/04/01 14:50:09 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "A";
//     char str2[] = "3";
//     int result;
// 	result = ft_strcmp(str1, str2);
//     if (result == 0)
//         printf("As strings são iguais.\n");
//     else if (result < 0)
//         printf("%s é menor que %s\n", str1, str2);
//     else
//         printf("%s é maior que %s\n", str1, str2);
//     return 0;
// }