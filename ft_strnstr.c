/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:41:00 by papereir          #+#    #+#             */
/*   Updated: 2022/09/22 16:52:33 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == haystack)
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && j + i < len
				&& haystack[i + j])
			{
				j++;
				if (needle[j] == '\0')
					return (&((char *)haystack)[i]);
			}
		}
		i++;
	}
	return (0);
}
