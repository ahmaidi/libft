/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:24:40 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/05 20:49:56 by ahmaidi          ###   ########.fr       */
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


char	**ft_split(char const *s, char c)
{
	int		len_pipes;
	char	**p ;
	int		i;
	char	*q;
	int		j;

	q = (char *)s;
	i = 0;
	len_pipes = nbr_pipes(s, c);
	p = (char **)malloc(sizeof(char *) * (len_pipes + 2));
	if (!p)
	{
		return (NULL);
	}
		
	else
	{
		 while (i < (nbr_pipes(s, c)))
		 {
			len = ft_strchr(q, c) - q;
			p[i] = (char *)malloc(sizeof(char ) * (len + 1));
			
			j = 0;
			while (j < len)
			 {
				p[i][j] = q[j];
				j++;
			 }
			p[i][j] = '\0';
			 q = ft_strchr(q,c);
			 
			 q++;
			 
			i++;
		}
		printf("%d\n", i);
		i = word_before_last_char(&p, &q, c, len_pipes);
		puts(q);
		if(strlen(q)  != 0)
		{
				printf("I'm here\n");
				j = 0;
			p[i] = (char *)malloc(sizeof(char ) * (strlen(q) + 1));
			while(j < strlen(q))
			{
				p[i][j] = q[i];
				j++;
			}
			p[i][j] = '\0';
			i++;
		}
		p[i] = NULL;
	}
	return (p);
}

int main()
{
	char **p;
	int i;
	i = 0;
	char *s = "hello|worldh|I'm|here|jjjjj";
	p = ft_split(s, '|');
	while(i < 6){
		puts(p[i]);
		i++;
	}
}
//   hello|world|I'm|here|thanks|forall