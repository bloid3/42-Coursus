/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:34:46 by papereir          #+#    #+#             */
/*   Updated: 2022/09/21 16:35:23 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_charcmp(char c1, char c2)
{
	if ((unsigned char) c1 != (unsigned char) c2)
	{
		return ((unsigned char)c1 - (unsigned char) c2);
	}
	return (0);
}

int	strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		if (ft_charcmp(str1[i], str2[i]))
			return ((str1[i]) - str2[i]);
		i++;
	}
	if (i < n)
	{
		return (ft_charcmp(str1[i], str2[i]));
	}
}
