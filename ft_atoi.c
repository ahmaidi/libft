/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:52:07 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/03 19:31:39 by ahmaidi          ###   ########.fr       */
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

int	convert_to_number(const char *str)
{
	int	i;
	unsigned long long	res;

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
	int	sign;
	unsigned long long	res;

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
	if (res > 9223372036854775807)
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
