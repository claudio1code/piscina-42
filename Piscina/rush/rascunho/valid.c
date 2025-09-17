/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:57:23 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/29 19:23:12 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str, int size);
void	print_error(void);

void	print_error(void)
{
	ft_putstr("Dict Error\n", 11);
}

void	valid_error(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 0 || ft_strlen(str) > 37)
	{
		print_error();
		return (0);
	}
	if (str[0] == '-')
	{
		print_error();
		return (0);
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			print_error();
		return (0);
		}
		i++;
	}
}

void valid_arg(int agrc)
{
	if (agrc != 1)
		print_error();
}

