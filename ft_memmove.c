/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:20:42 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/06 14:26:22 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	if ((char *)dst > (char *)src)
	{	
		while (i >= 0)
		{
			((char *)dst)[(int)i] = ((char *)src)[(int)i];
			i--;
		}
	}
	else if ((char *)dst < (char *)src)
	{

		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
int		main()
{
	int i = 0;
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 					{67, 67, 68, 68, 69, 0, 45};
// char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
	while( i < 6)
	{
		printf("%c\n",((char *)memmove(sResult + 1, sResult, 2))[i]);
		printf("%c\n",((char *)ft_memmove(sResult + 1, sResult, 2))[i]);
		i++;
	}
}