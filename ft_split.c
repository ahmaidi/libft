/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:24:40 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/07 20:23:12 by ahmaidi          ###   ########.fr       */
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
	while(i < (int)ft_strlen(s))
	{
		trv = 0;
		while((int)ft_strlen(s) != i && s[i] != c)
		{
			trv = 1;
			i++;
		}
		if(trv == 1)
			tmp++;	
		i++;
	}
	return(tmp);
}
int nbr_of_char(int *j,char *s, char c)
{
	int p;
	p = *j;

	while (*j != (int)ft_strlen(s))
	{
		if(s[*j] == c)
			break;
		(*j)++;
	}
	
	return (*j - p);
}
char	**ft_split(char const *s, char c)
{
	int i;
	int nbr_of_word;
	char **tab_str;
	int j;
	int t;
	int temp;
	j = 0;
	i = 0;
	t = 0;
	nbr_of_word = nbr_of_words(s, c);
	tab_str = (char **)malloc(sizeof(char*) * (nbr_of_word + 1));
	if(!tab_str)
		return (NULL);
		while (j < (int)ft_strlen(s))
		{
			if(s[j] != c && i < nbr_of_word)
			{
				temp = j;
				tab_str[i] = (char *)malloc(sizeof(char *) * (nbr_of_char(&j, (char *)s, c) + 1));
				
				if(!tab_str[i])
					return (NULL);
				t = 0;
				while(t < j - temp)
				{
					tab_str[i][t] = s[temp + t];
					t++;
				}
				tab_str[i][t]= 0;
				i++;
			}
			j++;
		}

	tab_str[i] = NULL;
	return (tab_str);
}