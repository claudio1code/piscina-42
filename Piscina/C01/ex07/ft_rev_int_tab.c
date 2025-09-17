/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:25:57 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/25 19:22:24 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temporary;

	i = 0;
	j = size -1;
	temporary = 0;
	while (i < j)
	{
		temporary = tab[i];
		tab[i] = tab[j];
		tab[j] = temporary;
		i++;
		j--;
	}
}
