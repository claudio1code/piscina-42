/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:18:46 by lshiguey          #+#    #+#             */
/*   Updated: 2025/03/21 14:48:43 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "leandro";

	printf("---------------------------void1\n");
	printf(" str: %p\n",  str);
	printf("&str: %p\n", &str);
	printf("*str: %d\n", *str);
	ft_putstr(str);
	printf("\n---------------------------void2\n");
	printf(" str: %p\n",  str);
	printf("&str: %p\n", &str);
	printf("*str: %d\n", *str);
}	*/
