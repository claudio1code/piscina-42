/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:39:41 by nicolada          #+#    #+#             */
/*   Updated: 2025/03/29 10:52:19 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
	temp = tab[i];
	tab[i] = tab [size - 1 - i];
	tab[size - 1 - i] = temp;
	i++;
	}
}
#include <stdio.h>

int main(void)
{
    int gaybriel[4] = {1, 9, 3, 7};
    
    // Reverse the array
    ft_rev_int_tab(gaybriel, 4);

    // Print the reversed array
    for (int i = 0; i < 4; i++) {
        printf("%d ", gaybriel[i]);
    }
    printf("\n");

    return 0; // Return 0 to indicate success
}
