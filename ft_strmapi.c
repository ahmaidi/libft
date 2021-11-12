/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:02:47 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/12 21:20:16 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char to_upper(unsigned int i, char c)
{
	if(i != 0)
		c -= 32;
	return c;
}
char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	int		i;
	char	*s2;

	if (s == NULL)
		return (NULL);
	if (*s == '\0')
	{
		return (ft_calloc(1, sizeof(char)));
	}
	s2 = malloc(sizeof(char ) * (ft_strlen(s) + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
int main()
{
	char s[] = "hello";
	printf("%s\n",ft_strmapi(s,to_upper));
}
