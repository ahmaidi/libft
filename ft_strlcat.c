/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:16:58 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/02 18:22:01 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *   dst, const char *   src, size_t dstsize){
    int slen = ft_strlen(src);
    int dlen = ft_strlen(dst);
     int i ;
     i = 0;
     if (dstsize <= dlen)
        return slen + dstsize;
        
     while(i < dstsize - dlen - 1   && i < slen){
         dst[dlen + i] = src[i];
         i++;
     }
     dst[dlen + i] = '\0';
     return slen + dlen;
}

// ahmed     ali 
// salu        hello world 
// saluhell