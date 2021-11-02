/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:39:10 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/02 20:50:09 by ahmaidi          ###   ########.fr       */
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
    return p;
}
int main() {

    const char * original = "The original string.";

    // On duplique la chaîne de caractères initiale.
    char * copy = ft_strdup( original );
    
    // On passe chaque lettre en majuscule.
    char * ptr = copy;
    while( *ptr != '\0' ) {
        *ptr = ft_toupper( *ptr );
        ptr++;
    }

    // On affiche la chaîne finale
    printf( "%s\n", copy );

    // Sans oublier de libérer l'espace mémoire au final.
    free( copy );

    
}