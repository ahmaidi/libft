/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:44:29 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/08 12:32:22 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_of_n(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
		i = i + 1;
	}
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	int		last;
	int		i;

	i = 0;
	len = (int)size_of_n(n);
	last = len - 1;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[i] = '-';
		n *= (-1);
		i++;
	}
	while (len != i)
	{
		s[len - 1] = (n % 10) + '0';
		n = n / 10;
		len --;
	}
	s[last + 1] = '\0';
	return (s);
}
