/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:49:26 by papereir          #+#    #+#             */
/*   Updated: 2022/09/01 17:01:37 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	d;

	c = ft_strlen(src);
	d = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (src[d] != '\0' && c + 1 < size)
	{
		dst[c] == src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen (dst));
}
