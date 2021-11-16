/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:05:57 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/16 22:39:46 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*position;
	t_list	*copy_by_f;
	t_list	*news;

	position = lst;
	copy_by_f = NULL;
	if (!lst)
		return (NULL);
	while (position)
	{
		if (!f(position ->content))
		{
			ft_lstclear(&copy_by_f, del);
			return (NULL);
		}
		news = ft_lstnew(f(position->content));
		ft_lstadd_back(&copy_by_f, news);
		position = position->next;
	}
	return (copy_by_f);
}

// int main()
// {
// 	t_list	lst1;
// 	t_list	lst2;
// 	t_list	lst3;
// 	t_list	lst4;

	
// }