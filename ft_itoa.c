/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:42:03 by papereir          #+#    #+#             */
/*   Updated: 2022/10/03 17:04:54 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_dig(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	int			digits;
	long int	num;

	str_num = "";
	num = n;
	digits = ft_dig(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_num = malloc(digits * sizeof(char) + 1);
	if (!str_num)
		return (0);
	str_num[digits] = '\0';
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (num < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
/*
int	main(void) {
	printf("%s",ft_itoa(234));
	return (0);
}
*/