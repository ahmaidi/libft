/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:50:22 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/02 20:06:33 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *  memchr(const void *s, int c, size_t n)
{
    int i ;
    i = 0;
    while (i < n){
        if ( ((char *)s)[i] == c )
            return ((char *)s + i);
        i++;
    }
    return NULL;
}

