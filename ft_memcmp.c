/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:14:43 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/02 19:58:43 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
        int i ;
        i = 0;
        while ( i < n )
        {
            if ( ((char *)s1)[i] != ((char *)s2)[i] )
                return (unsigned char)((char *)s1)[i] - (unsigned char)((char *)s2)[i];
            i++;
        }
        return 0;
}
