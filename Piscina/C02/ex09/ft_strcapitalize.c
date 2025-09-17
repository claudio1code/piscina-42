/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:44 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/27 15:31:55 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
			str[i] = str[i] - 32;
		else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	a [57] = "oi, tudo bem? 42palavras QUARENTA-e-duas; cinquenta+e+um";

// 	ft_strcapitalize(a);
// 	printf("%s\n", a);
// 	return (0);
// }