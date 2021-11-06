/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:24:40 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/06 12:50:14 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_separateurs(char const *s, char c)
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

static int	words_before_last_spr(char **p, char **q, char c, int nbr_separateur)
{
	size_t	len;
	int		i;
	size_t		j;

	i = 0;
	while (i < nbr_separateur)
	{
		len = ft_strchr(*q, c) - *q;
		p[i] = (char *)malloc(sizeof(char ) * (len + 1));
		j = 0;
		while (j < len)
		{
			p[i][j] = (*q)[j];
			j++;
		}
		p[i][j] = '\0';
		*q = ft_strchr(*q, c);
		(*q)++;
		i++;
	}
	return (i);
}

static int	word_after_last_spr(char **p, char *q, int i)
{
	size_t	j;
	int	i_tmp;

	i_tmp = i;
	j = 0;
	p[i] = (char *)malloc(sizeof(char ) * (strlen(q) + 1));
	while (j < strlen(q))
	{
		p[i][j] = q[i];
		j++;
	}
	p[i][j] = '\0';
	i_tmp++;
	return (i_tmp);
}

char	**ft_split(char const *s, char c)
{
	size_t				nbr_separateur;
	char				**p;
	int					i;
	char				*q;

	q = (char *)s;
	nbr_separateur = nbr_separateurs(s, c);
	p = (char **)malloc(sizeof(char *) * (nbr_separateur + 2));
	if (!p)
	{
		return (NULL);
	}		
	else
	{
		i = words_before_last_spr(p, &q, c, nbr_separateur);
		if (strlen(q) != 0)
		{
			i = word_after_last_spr(p, q, i);
		}
		p[i] = NULL;
	}
	return (p);
}
