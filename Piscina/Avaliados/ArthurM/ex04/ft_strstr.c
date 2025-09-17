/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:28:04 by armeneze          #+#    #+#             */
/*   Updated: 2025/04/01 11:31:07 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

char	*find_string(char *str, char *to_find, int count)
{
	int	count_save;
	int	count_find;

	count_save = count;
	count_find = 0;
	while (to_find[count_find] != '\0')
	{
		if (str[count_save] == to_find[count_find])
		{
			if (to_find[count_find + 1] == '\0')
			{
				return (&str[count_save]);
			}
			count_save++;
			count_find++;
		}
		else
		{
			count_find = 0;
			break ;
		}
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		count;
	char	*ponteiro;

	count = 0;
	*ponteiro = NULL;
	while (str[count] != '\0')
	{
		if (str[count] == to_find[0])
		{
			ponteiro = find_string(str, to_find, count);
			if (ponteiro != NULL)
			{
				return (ponteiro);
			}
		}
		count++;
	}
	return (NULL);
}

// int main() {
//     char olaMundo[] = "ola mu1ndo1 mundo ola mundo1 mundo";
//     char mundo[] = "mund87o";

//     char *result = ft_strstr(olaMundo, mundo);
//     printf("Endereço de memória encontrado: %p\n", result);
//     if (result != NULL) {
//         printf("Substring encontrada: %s\n", result);
//     } else {
//         printf("Substring não encontrada.\n");
//     }

//     return 0;
// }
// hello word !!!!!
// word
