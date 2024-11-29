/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatela <kchatela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:07:43 by kchatela          #+#    #+#             */
/*   Updated: 2024/11/29 11:53:16 by kchatela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
	{
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		len;

	len = int_len(n);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	i = len - 1;
	while (n != 0)
	{
		result[i] = ((n % 10) + '0');
		n = n / 10;
		i--;
	}
	result[len] = '\0';
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_itoa(789));
}*/
