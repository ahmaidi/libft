/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:20:42 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/01 20:50:17 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len){
    if((char *)dst > (char *)src){
        int i;
         i = len - 1;
         while(i >= 0){
             ((char *)dst)[i] = ((char *)src)[i];
             i--;
         }
        
    }else if ((char *)dst < (char *)src) {
        int i = 0;
        while (i < len){
            ((char *)dst)[i] = ((char *)src)[i];
            i++; 
        }
    }
    return dst;
}


// 123456abc   123456ab6    123123456
//123|123|123
//123