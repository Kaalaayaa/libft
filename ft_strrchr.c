/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:17:26 by kchatela          #+#    #+#             */
/*   Updated: 2024/11/20 17:42:28 by kchatela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == c){
            return ((char *)&s[i]);
        }
        i--;
    }
    return (NULL);
}

/*#include <stdio.h>

int main(void)
{
    char s[] = "Kalaya";
    char c = '\0';
    
    char *result = strrchr(s, c);
    
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
*/