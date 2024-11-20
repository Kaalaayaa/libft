/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:30:06 by kchatela          #+#    #+#             */
/*   Updated: 2024/11/20 15:29:42 by kchatela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return ((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == c)
    {
        return ((char *)&s[i]);
    }
    return (NULL);
}

#include <stdio.h>

int main(void)
{
    char s[] = "Kalaya";
    char c = 'a';
    
    char *result = strchr(s, c);
    
    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", c, result - s);
    }
    else
    {
        printf("Character '%c' not found\n", c);
    }

    return 0;
}
