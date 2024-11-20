/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:09:23 by kchatela          #+#    #+#             */
/*   Updated: 2024/11/20 18:07:50 by kchatela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int ft_atoi(const char *str);
int ft_isalpha (int c);
int ft_isdigit (int c);
int ft_isprint (int c);
int ft_isalnum(int c);
int ft_isascii(int c);
size_t ft_strlen(const char *str);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
#endif
