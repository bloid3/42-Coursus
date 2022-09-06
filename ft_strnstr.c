/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:41:00 by papereir          #+#    #+#             */
/*   Updated: 2022/09/06 14:43:36 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (!big || !little)
		return (NULL);
	if (!little || !little[0])
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && i
			+ j < len && big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)(big + i));
	}
}
