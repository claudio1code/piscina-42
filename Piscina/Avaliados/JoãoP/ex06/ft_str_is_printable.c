/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopastor <jopastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:20:35 by jopastor          #+#    #+#             */
/*   Updated: 2025/03/29 16:05:05 by jopastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("\nTeste 1, Esperado:1 Resultado: %d", ft_str_is_printable(" "));
	printf("\nTeste 2, Esperado:0 Resultado: %d", ft_str_is_printable("\n"));
	printf("\nTeste 3, Esperado:1 Resultado: %d", ft_str_is_printable(" +-21"));
	return (0);
}*/