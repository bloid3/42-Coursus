/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:49:26 by papereir          #+#    #+#             */
/*   Updated: 2022/09/06 14:51:01 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	d;

	c = ft_strlen(src);
	d = 0;
	if (size <= (size_t) ft_strlen(dst))
		return (size + (size_t) ft_strlen(src));
	while (src[d] != '\0' && c + 1 < size)
	{
		dst[c] == src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return ((size_t) ft_strlen (dst));
}
