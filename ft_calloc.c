/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:16:17 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/03 19:38:44 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_calloc(size_t count, size_t size)
{
	int i;

	i = 0;
	void * p = (void *)malloc(count * size);
    if (!p)
		return (NULL);
	else {
		while (i < count * size)
		{
			((char *) p)[i] = 0;
			i++;
		}
		((char *) p)[i] = '\0';
		return (p);
	}
}

