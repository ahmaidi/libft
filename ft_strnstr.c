/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:01:05 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/02 20:15:23 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *  strnstr(const char *haystack, const char *needle, size_t len)
{
        int i ;
        int j;
        i = 0;
        while (i < len){
            j = 0;
            while (j < len && haystack[i + j] == needle[j])
                j++;
            i++;
        }
}