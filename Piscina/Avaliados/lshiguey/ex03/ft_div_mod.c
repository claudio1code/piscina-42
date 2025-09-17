/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:46:44 by lshiguey          #+#    #+#             */
/*   Updated: 2025/03/24 13:22:08 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}	

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	x;
// 	int	*div;
// 	int	*mod;

// 	a = 50;
// 	b = 3;
// 	x = 0;
// 	div = &x;
// 	mod = &x;
// 	ft_div_mod(a, b, div, mod);
// }
