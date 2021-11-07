/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:52:07 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/07 18:37:05 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static const char	*ft_del_fespace(const char *str)
{
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\f' || *str == '\v' || *str == '\r'))
	{
		str++;
	}
	return (str);
}

static int	convert_to_number(const char *str)
{
	int					i;
	int 	res;

	res = 0;
	i = 0;
	while (*(str + i) && ft_isdigit(*(str + i)))
	{
		res = res * 10 + (*(str + i) - '0');
		i++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int					sign;
	int	res;

	sign = 1;
	str = ft_del_fespace(str);
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	else if (str[0] == '+')
		str++;
	res = convert_to_number(str);
	if (res > 2147483647)
	{	
		if (sign > 0)
			return (-1);
		else
		{
			return (0);
		}
	}
	return (res * sign);
}