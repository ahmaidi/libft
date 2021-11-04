/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:24:40 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/04 21:01:00 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_pipes(char const *s, char c)
{
	int		i;
	char	*find;

	i = 0;
	find = (char *)&s[0];
	while (ft_strchr(find, c))
	{
		find = strchr(find, c);
		find++;
		i++;
	}
	return (i);
}
// char	**ft_split(char const *s, char c)
// {
// 	int len_pipes;

// 	l
// }

int main()
{
	int i;
	char *s = "hello|world|I'm|here|thanksforall";
	i = nbr_pipes(s, '|');
	printf("%d\n",i);
}














//   hello|world|I'm|here|thanks|forall