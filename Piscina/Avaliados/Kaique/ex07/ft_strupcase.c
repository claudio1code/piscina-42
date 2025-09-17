/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:51:48 by kaguilar          #+#    #+#             */
/*   Updated: 2025/04/01 13:40:27 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] > 96 && str[a] < 123)
			str[a] -= 32;
		a++;
	}
	return (str);
}

int main(){
	char	var[] = "asdh@f1Adhfghdsa";
	int t = 0;

	ft_strupcase(var);
	while (var[t] != '\0')
	{
		write(1, &var[t], 1);
		t++;
	}

}