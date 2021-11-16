/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:29:11 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/16 22:38:58 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void del(void * d)
// {
// 	free(d);
// }
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// int main()
// {
// 	t_list *lst;
// 	lst= ft_lstnew(ft_strdup("hello"));
// 	printf("%s\n",lst->content);
// 	ft_lstdelone(lst,del);
// 	printf("bay bay");
// 	printf("%s\n",lst->content);
// }