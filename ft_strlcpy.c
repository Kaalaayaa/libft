/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:54:53 by kchatela          #+#    #+#             */
/*   Updated: 2024/11/19 16:33:33 by kchatela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;

    src_len = ft_strlen(src);

    if (src_len + 1 < dstsize)
    {
        ft_memcpy(dst, src, src_len + 1);
    } else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = 0;
    }
    return (src_len);
}

int main(void)
{
    char dst[50] = "Hello, ";
    const char *src = "world!";
    size_t dstsize = 50;

    size_t result = ft_strlcat(dst, src, dstsize);
    printf("Resulting string: %s\n", dst);
    printf("Total length: %zu\n", result);
    
    return 0;
}