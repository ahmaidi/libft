/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:28:28 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/03 18:29:07 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i;
    i = 0;
    while (i  < n && s1[i] )
    {
        if(s1[i] !=  s2[i])
            return (unsigned int)s1[i] - (unsigned int)s2[i];
             i++;   
    }
    return 0;
}