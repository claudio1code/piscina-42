/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:56:03 by rvolkman          #+#    #+#             */
/*   Updated: 2025/03/26 14:59:41 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			;
		}
		else
		{
			return(0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int	result;

	result = ft_str_is_alpha("aiAai");
	printf("%d\n", result);
	result = ft_str_is_alpha("a6*&$#");
	printf("%d\n", result);
	result = ft_str_is_alpha("");
	printf("%d\n", result);

	return (0);
}
