/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:52:46 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/06 12:51:36 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str_join;
	size_t			s1_len;
	size_t			s2_len;
	unsigned int	i;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str_join = (char *)malloc(sizeof(char) * (s1_len + s2_len));
	if (!str_join)
		return (NULL);
	while (i < s1_len)
	{
		str_join[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		str_join[i + s1_len] = s2[i];
		i++;
	}
	str_join[i + s1_len] = '\0';
	return (str_join);
}
