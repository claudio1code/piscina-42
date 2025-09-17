/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joribeir <joribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 04:47:04 by joribeir          #+#    #+#             */
/*   Updated: 2025/03/24 05:30:22 by joribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a;
	aux_b = *b;
	*a = aux_a / aux_b;
	*b = aux_a % aux_b;
}
