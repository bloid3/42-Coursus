/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:33:52 by papereir          #+#    #+#             */
/*   Updated: 2022/09/06 13:08:29 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	int		j;
	int		size;

	substr = malloc(len*sizeof(char) + 1);
	i = start - 1;
	j = 0;
	while (j < len)
	{
		substr[j] = s[i];
		j++;
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

int	main(void)
{
	char	str[12] = "Hola que tal";
	unsigned int start = 3;
	size_t len = 4;
	printf("%s",ft_substr(str, start, len));
}