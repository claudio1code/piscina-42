/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:08:03 by grodrig2          #+#    #+#             */
/*   Updated: 2025/03/25 11:12:48 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

// int	main(void)
// {
// 	char *st;

// 	st = "Hello";
// 	ft_putstr(st);
// 	return(0);
// }
