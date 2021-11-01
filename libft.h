/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:25:00 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/01 20:20:28 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void * ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void * ft_memmove(void *dst, const void *src, size_t len);
#endif