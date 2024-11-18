/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:42:56 by kchatela          #+#    #+#             */
/*   Updated: 2024/11/18 20:11:20 by kchatela         ###   ########.fr       */
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
        return (dstsize + dst_len);
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
