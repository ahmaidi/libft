/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:33:45 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/06 12:57:11 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	unsigned int		i;
	unsigned int		j;

	j = 0;
	i = start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr || !s[0] || start > ft_strlen(s))
		return (NULL);
	else
	{
		while (j < len && s[i])
		{
			substr[i - start] = s[i];
			i++;
			j++;
		}
		substr[i] = '\0';
	}
	return (substr);
}
