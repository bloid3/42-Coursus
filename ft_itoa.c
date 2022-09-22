/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:42:03 by papereir          #+#    #+#             */
/*   Updated: 2022/09/22 19:33:49 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_dig(int n)
{
	size_t	i;

	i = 1;
	while (n / 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	str_num = NULL;
	num = (long int) n;
	digits = get_dig(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	if (!(str_num == malloc(digits * sizeof(char) + 1)))
		return (0);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (num < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
