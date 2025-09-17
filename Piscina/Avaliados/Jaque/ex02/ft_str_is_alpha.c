/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:13:02 by jde-mour          #+#    #+#             */
/*   Updated: 2025/04/02 13:57:34 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	*alpha;
	char	*mix;
	char	*empty;

	alpha = "ola";
	mix = "ola123";
	empty = "";
	printf("%d\n", ft_str_is_alpha("123"));
	printf("%d\n", ft_str_is_alpha(mix));
	printf("%d\n", ft_str_is_alpha(empty));
	return (0);
}
