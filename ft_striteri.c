/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:50:52 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/12 21:33:40 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void to_upper(unsigned int i, char *c)
{
	if (i != 0)
		*c -= 32;

}
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{	
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*(s + i))
	{
		(*f)(i, (s + i));
		i++;
	}
}
int main()
{
	char s[] = "hello";
	ft_striteri(s,to_upper);
	printf("%s\n",s);
}