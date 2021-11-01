/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:41:06 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/01 20:46:22 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"



int main(int argc, char **argv){
    
    //isdigit-----
    
   /*if(strlen(argv[1])> 1)
            {
                printf("no");
        }
        else if (ft_isdigit(argv[1][0]))
                printf("is alpha");
            else printf("non");
   */
   
   
   // isalpha----
   
   /*if(strlen(argv[1])> 1)
            {
                printf("no");
        }
        else if (ft_isalpha(argv[1][0]))
                printf("is alpha");
            else printf("non");
        */
    // isalnum----
    
//    if(strlen(argv[1])> 1)
//             {
//                 printf("no");
//         }
//         else if (ft_isalnum(argv[1][0]))
//                 printf("is alnum");
//             else printf("non");
   
  
    // isascii-----

    // if(argc >= 2){
    //     if(ft_isascii(atoi(argv[1])))
    //         printf("is ascii");
    //     else printf("non");
    // }else printf("number of agr should be less then 2");
    
    // isprint

    // if(argc >= 2){
    //     if(ft_isprint(atoi(argv[1])))
    //         printf("is print");
    //     else printf("non");
    // }else printf("number of agr should be less then 2");

    // strlen----
    
    //     if(argc >= 2){
    //         printf("%zu",ft_strlen(argv[1]));
        
    // }else printf("number of agr should be less then 2");

    // memset----
    
    // ft_memset(argv[1], argv[2][0], strlen(argv[1]));
    // printf("%s",argv[1]);
    
    // bzero------
    // ft_bzero(argv[1], strlen(argv[1]));
    // printf("%s",argv[1]);
    // return (0);
   
   //memcpy------------
    //   ft_memcpy(argv[1],  argv[2], strlen(argv[2]));
    //   printf("%s",argv[1]);
    
    //memmove-------
    ft_memmove(argv[1], argv[1] + 3, strlen(argv[1] + 3));
    printf("%s\n",argv[1]);
    // strlcpy
    
    
 }