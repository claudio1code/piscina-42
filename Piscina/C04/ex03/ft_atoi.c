/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:41:43 by clados-s          #+#    #+#             */
/*   Updated: 2025/04/02 11:38:03 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sig;
	int	sig_len;

	i = 0;
	sig = 1;
	result = 0;
	sig_len = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig_len++;
		i++;
	}
	if (sig_len % 2 != 0)
		sig = -1;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sig);
}

// #include<stdio.h>
// int main(void)
// {
//     printf("%d", ft_atoi("    -----+-+-123eer45"));
//     return (0);
// }