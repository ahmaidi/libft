/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:39:10 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/03 15:25:55 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *  ft_strdup(const char *s1)
{
    int len = ft_strlen(s1);
    char * p = (char *) malloc (len);
    int i ;
     i = 0;
     if (!p)
        return NULL;
    while (i < len )
    {
        p[i] = s1[i];
        i++;
    }
    p[i] = '\0';
    return p;
}
