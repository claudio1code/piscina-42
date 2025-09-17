/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:08:47 by lshiguey          #+#    #+#             */
/*   Updated: 2025/03/18 19:19:36 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	*pt;
	int	vl;

	vl = 42;
	pt = &vl;
	printf("*pt: %d.\n", *pt);
	printf(" pt: %p.\n", pt);
	printf("&pt: %p.\n", &pt);
	printf(" vl: %d.\n", vl);
	printf("&vl: %p.\n", &vl);
	//write(1, *pt, 1);       
	//write(1, "\n", 1);      
	write(1, pt, 1);
	write(1, "\n", 1);
	write(1, &pt, 1);
	write(1, "\n", 1);
	//write(1, vl, 1);        
	//write(1, "\n", 1);      
	write(1, &vl, 1);
	write(1, "\n", 1);
	ft_ft(pt);
}
*/
