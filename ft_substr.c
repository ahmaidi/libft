/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:33:45 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/09 18:17:55 by ahmaidi          ###   ########.fr       */
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
	if ((int)len < 0 || !s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr || !s[0])
		return (NULL);
	else
	{
		while (j < len && start <= len)
		{
			substr[i - start] = s[i];
			i++;
			j++;
		}
		substr[j] = '\0';
	}
	return (substr);
}
