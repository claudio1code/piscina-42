/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:51:57 by lshiguey          #+#    #+#             */
/*   Updated: 2025/03/25 15:15:22 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{	
	int	count;

	count = 0;
	while (str[count])
	{
		str++;
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	char	*str;
	int		count;

	str = "123456789+123456789+123456789+123456789+12";
	count = ft_strlen(str);
	printf(" count: %d\n", count);
	return (0);
}
*/