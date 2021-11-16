/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:54:47 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/16 22:39:22 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void del(void * d)
{
	free(d);
}
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_position;

	if (!lst || !del || !(*lst))
		return ;
	while (*lst)
	{
		next_position = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_position;
	}
}
void	ft_print(t_list *lst)
{
	t_list *temp;
	temp = lst;
	while(temp)
	{
		printf("%s\n",temp->content);
		temp = temp->next;
	}		
}

// int main()
// {
// 	t_list	*lst1;
// 	t_list	*lst2;

// 	char *s = ft_strdup("hello");
// 	char *s1 = ft_strdup("hello1");
// 	lst1 = ft_lstnew(s);
// 	lst2 = ft_lstnew(s1);
// 	lst1->next =lst2;
// 	ft_lstclear(&lst1, del);
// 	ft_print(lst1);
// }
