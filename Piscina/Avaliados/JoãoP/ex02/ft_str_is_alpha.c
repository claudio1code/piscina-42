/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopastor <jopastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:22:53 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/27 12:46:42 by jopastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
    char zero[1];
    char src_word[16] = "Hello, 42 World!";
	char dest_word[5];
    printf("Teste 0: Resultado: %d", ft_str_is_alpha(src_word));
	printf("\nTeste 1: Resultado: %d", ft_str_is_alpha("abdf"));
    printf("\nTeste 2: Resultado: %d", ft_str_is_alpha(zero));
    return (0);
}
*/