/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:30:56 by papereir          #+#    #+#             */
/*   Updated: 2022/10/12 11:32:09 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*save;

	if (lst != NULL)
	{
		aux = *lst;
		while (aux != NULL)
		{
			save = aux->next;
			del(aux->content);
			free(aux);
			aux = save;
		}
		*lst = NULL;
	}
}
