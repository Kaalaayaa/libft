/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:42:56 by kchatela          #+#    #+#             */
/*   Updated: 2024/11/20 14:06:03 by kchatela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    
    if (dst_len == dstsize)
    {
        return (src_len + dst_len);
    }
    if (dstsize > dst_len + src_len)
    {
        ft_memcpy(dst + dst_len, src, src_len + 1);
    } else
    {
        ft_memcpy(dst + dst_len, src, dstsize -1);
        dst[dstsize - 1] = '\0';
    }
    return (src_len + dst_len);
}

// #include <stdio.h>
// #include <string.h>


// int main(void)
// {
//     char dst[50];
//     const char *src = "ca va?";
//     size_t dstsize;

//     // Test 1: enough space
//     strcpy(dst, "Hello ");
//     dstsize = 50;
//     printf("Test 1: %zu (Expected: 12)\n", ft_strlcat(dst, src, dstsize)); 
//     printf("Result: '%s'\n\n", dst); // Should print "Hello world!"

//     //Test 2: too small
//     strcpy(dst, "Hello ");
//     dstsize = 10;
//     printf("Test 2: %zu (Expected: 12)\n", ft_strlcat(dst, src, dstsize));
//     printf("Result: '%s'\n\n", dst); // Should print "Hello ca "


//     //Test 3: dst is full
//     strcpy(dst, "Hello");
//     dstsize = 5;
//     printf("Test 3: %zu (Expected: 11)\n", ft_strlcat(dst, src, dstsize));
//     printf("Result: '%s'\n\n", dst); // Should print "Hello"

//     //Test 4: dst is empty
//     strcpy(dst, "\0");
//     dstsize = 50;
//     printf("Test 4: %zu (Expected: 6)\n", ft_strlcat(dst, src, dstsize));
//     printf("Result: '%s'\n\n", dst); // Should print "Hello"

//      // Test case 5: dstsize is 0
//     dst[0] = '\0';
//     dstsize = 0;
//     printf("Test 5: %zu (Expected: 6)\n", ft_strlcat(dst, src, dstsize)); 
//     printf("Result: '%s'\n\n", dst); // Should print an empty string

//     return 0;
// }