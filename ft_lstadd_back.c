/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:32:48 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/16 22:39:06 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *news)
{
	t_list	*last;

	if (lst == NULL || news == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = news;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = news;
	}
}
// void	ft_print(t_list *lst)
// {
// 	t_list *temp;
// 	temp = lst;
// 	while(temp)
// 	{
// 		printf("%s\n",temp->content);
// 		temp = temp->next;
// 	}		
// }
// int main()
// {
// 	t_list	*lst1;
// 	t_list	*lst2;
// 	t_list	*lst3;

// 	char *s = ft_strdup("hello");
// 	char *s1 = ft_strdup("hello1");
// 	char *s2 = ft_strdup("hello2");
// 	lst1 = ft_lstnew(s);
// 	lst2 = ft_lstnew(s1);
// 	lst3 = ft_lstnew(s2);
// 	lst1->next =lst2;
// 	ft_lstadd_back(&lst1,lst3);
// 	ft_print(lst1);
// }