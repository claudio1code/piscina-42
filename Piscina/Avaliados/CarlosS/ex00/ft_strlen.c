/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:52:13 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/29 10:18:58 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h> 

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

 int	main(void) 
 {
 	int result = ft_strlen("Cincooo"); 
 	printf("%d", result); 
	return (0); 
 } 
