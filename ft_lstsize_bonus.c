/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:50:34 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/16 22:40:01 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	ft_lstsize(t_list *lst)
{
	t_list	*n;
	int		count;

	count = 0;
	n = lst;
	while (n)
	{
		count++;
		n = n->next;
	}
	return (count);
}
// int main()
// {
// 	t_list	*lst1;
// 	t_list	*lst2;
// 	t_list	*lst3;
// 	t_list	*lst4;

// 	char *s = ft_strdup("hello");
// 	lst1 = ft_lstnew(s);
// 	lst2 = ft_lstnew(s);
// 	lst3 = ft_lstnew(s);
// 	lst4 = ft_lstnew(s);
// 	lst1->next =lst2;
// 	lst1->next->next =lst3;
// 	lst1->next->next->next =lst4;
// 	printf("%d\n",ft_lstsize(lst1));
// 	ft_print(lst1);
// }