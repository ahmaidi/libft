/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:14:13 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/01 18:31:40 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalnum(int c){
    if( (c >= '0' && c <= '9') || (( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ))
        return 1;
    return 0;
}