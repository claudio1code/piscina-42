/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:45:47 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/27 13:31:00 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	char				*start;

	start = dest;
	i = 0;
	while (i < n)
	{
		if (*src != '\0')
			*dest++ = *src++;
		else
			*dest++ = '\0';
		i++;
	}
	return (start);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	dest[] = "hellocara!";
// 	char 	src[] = "gf";
// 	printf("%s", ft_strncpy(dest, src, 3));
// }