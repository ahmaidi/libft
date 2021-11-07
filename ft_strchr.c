/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:08:45 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/07 14:36:26 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if(c)
	{
		if (c >= 256)
		c -= 256;
		while (s[i] != '\0')
		{
			if (s[i] == c)
				return ((char *)s + i);
			i++;
		}
		return (NULL);
	}
	else 
		return ((char *)s + ft_strlen(s));
	
	
}
