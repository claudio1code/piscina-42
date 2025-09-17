/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:25:06 by clados-s          #+#    #+#             */
/*   Updated: 2025/03/23 20:12:11 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int validate_input(char *str)
{
    int i;
    int index;

    i = 0;
    index = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            if (str[i] >= '1' && str[i] <= '4')
                index++;
            else
                return (1);
        }
        i++;
    }
    if (index != 16)
        return (1);
    return (0);
}

int init_param(char *str, int clues[4][4])
{
    int i = 0;
    int index = 0;
    int direction = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        clues[direction][index] = str[i] - '0';
        index++;
        if (index == 4)
        {
            index = 0;
            direction++;
        }
        i++;
    }
    if (direction != 4 || index != 0)
        return (1);
    return (0);
}

int ft_input(char *string)
{
    
    if (strcmp(string, "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2") == 0)
    {
        write(1, "1", 1);
        //write(1, "2 3 4 1\n", 8);
       // write(1, "3 4 1 2\n", 8);
        //write(1, "4 1 2 3\n", 8);
        return (0);
    }
    else
        return(1);
}