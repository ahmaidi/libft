/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:19:18 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/13 16:28:30 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*prev;
	t_list	*list;

	if (!lst)
		return (NULL);
	list = lst;
	while (list)
	{
		prev = list;
		list = list->next;
	}
	return (prev);
}
