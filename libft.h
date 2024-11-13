/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:09:23 by kchatela          #+#    #+#             */
/*   Updated: 2024/11/13 15:12:56 by kchatela         ###   ########.fr       */
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
int ft_isalnum(int c);
size_t ft_strlen(const char *str);

#endif