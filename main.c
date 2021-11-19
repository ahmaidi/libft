/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:13:04 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/19 23:45:47 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	add_i(unsigned int i, char c)
{
	c+= i;
	return (c);
}

int main()
{
	printf("%d\n",strncmp(NULL,"helo",5));
	return (0);
}