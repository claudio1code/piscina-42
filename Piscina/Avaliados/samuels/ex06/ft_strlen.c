/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssiqueir <ssiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:46:24 by ssiqueir          #+#    #+#             */
/*   Updated: 2025/03/20 13:50:19 by ssiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
// #include	<stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str [count] != '\0')
	{
	count++;
	}
	return (count);
}
// int main()
// {
// 	char str[] = "samuel siqueira lima ";
// 	printf("O tamanho da string é: %d\n", ft_strlen(str));
//     return 0;
// }