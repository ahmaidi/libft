/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:44:29 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/06 12:40:02 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t size_of_n(int n)
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
	size_t	len;
	char	*s;
	size_t	last;

	len = size_of_n(n);
	printf("%zu\n",len);
	last = len;
	s = malloc(sizeof(char) * (len + 1));
	printf("%p\n",s);
	while (n / 10)
	{
		printf("------------%d\n----------------",n % 10);
		printf("------------%d\n----------------",n);
		s[len] = n % 10 + '0';
		n = n / 10;
		len --;
	}
	printf("%c\n",s[0]);
	s[last + 1] = '\0';
	return (s);
}
int main()
{
	int n;
	n = 345678;
	printf("%lu\n",size_of_n(n));
	char *s;
	s = ft_itoa(n);
	printf("%d\n",n / 10);
	// puts()
}