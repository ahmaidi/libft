/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:13:23 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/02 16:41:34 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr(const char *s, int c){
    int i;
    i = ft_strlen(s);
    while(i >= 0){
        if(s[i] == c)
        return ((char *)s + i);
        i--;
    }
    return NULL;
}