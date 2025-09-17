/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:43:31 by rgareti-          #+#    #+#             */
/*   Updated: 2025/03/30 19:22:02 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "dictionnaire.h"

char *ft_strdup(const char *s)
{
    if (s == NULL) {
        return NULL;
    }

    // Calcula o tamanho da string original
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }

    // Aloca memória para a nova string (tamanho + 1 para o '\0')
    char *new_str = malloc(len + 1);
    if (new_str == NULL) {
        return NULL;  // Falha na alocação
    }

    // Copia os caracteres
    for (size_t i = 0; i <= len; i++) {
        new_str[i] = s[i];
    }

    return new_str;
}

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;
    
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}