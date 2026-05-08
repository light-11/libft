/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 09:00:08 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:55:48 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_next;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		lst_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_next;
	}
	*lst = NULL;
}
