/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:49:26 by papereir          #+#    #+#             */
/*   Updated: 2022/09/21 16:32:26 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	contador;

	i = ft_strlen(src);
	j = ft_strlen(dest);
	contador = 0;
	if (size < j)
		return (i + size);
	else if (size > 0)
	{
		while (src[contador] && contador + j < size - 1)
		{
			dest[j + contador] = src[contador];
			contador++;
		}
	}
	dest[j + contador] = '\0';
	return (i + j);
}
