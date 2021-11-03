/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:13:41 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/03 18:30:54 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t ft_strlcpy(char *  dst, const char *  src, size_t dstsize)
{
    int res;
    res = ft_strlen(src);
    int i ;
    i = 0; 
    while(i < dstsize - 1 && i < res)
    {
        *(dst  + i) = *(src + i);
        i++;
    }
    *(dst +i ) = '\0';
    return res;
}
