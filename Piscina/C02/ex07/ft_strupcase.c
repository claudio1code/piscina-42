/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:51:05 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/27 15:30:57 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	a[9] = "ghjkjhgjh";
// 	ft_strupcase(a);
// 	printf("%s", a);
// 	return (0);
// }