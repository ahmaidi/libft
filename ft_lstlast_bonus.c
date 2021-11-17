/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:19:18 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/16 22:39:36 by ahmaidi          ###   ########.fr       */
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
// int main()
// {
// 	t_list	*lst1;
// 	t_list	*lst2;
// 	t_list	*lst3;
// 	t_list	*lst4;

// 	char *s = ft_strdup("hello");
// 	char *s1 = ft_strdup("hello2");
// 	lst1 = ft_lstnew(s);
// 	lst2 = ft_lstnew(s);
// 	lst3 = ft_lstnew(s);
// 	lst4 = ft_lstnew(s1);
// 	lst1->next =lst2;
// 	lst1->next->next =lst3;
// 	lst1->next->next->next =lst4;
// 	printf("%s\n",ft_lstlast(lst1)->content);
// }