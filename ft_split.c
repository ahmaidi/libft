/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:24:40 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/07 17:38:53 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_of_words(char const *s, char c)
{
	int		i;
	int trv;
	int	tmp;
	i = 0;
	tmp = 0;
	while(s[i])
	{
		trv = 0;
		while((int)ft_strlen(s) != i && s[i] != c)
		{
			trv = 1;
			printf("%d\n",i);
			i++;
		}
		if(trv == 1)
			tmp++;	
		i++;
	}
	return(tmp);
}

int main()
{
	printf("%d\n",nbr_of_words("temp 42",' '));
}