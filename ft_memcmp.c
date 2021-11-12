/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:14:43 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/12 21:25:02 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return ((unsigned char)((char *)s1)[i]
			- (unsigned char)((char *)s2)[i]);
		i++;
	}
	return (0);
}
int main()
{
	char *s = "hello";
	char *s1 = "cello";
	printf("%d\n",ft_memcmp(s,s1,5));

}