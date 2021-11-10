/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:41:06 by ahmaidi           #+#    #+#             */
/*   Updated: 2021/11/10 18:44:07 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 # include "libft.h"


 //int main(){
    
//     //isdigit-----
    
//    /*if(strlen(argv[1])> 1)
//             {
//                 printf("no");
//         }
//         else if (ft_isdigit(argv[1][0]))
//                 printf("is alpha");
//             else printf("non");
//    */
   
   
//    // isalpha----
   
//    /*if(strlen(argv[1])> 1)
//             {
//                 printf("no");
//         }
//         else if (ft_isalpha(argv[1][0]))
//                 printf("is alpha");
//             else printf("non");
//         */
//     // isalnum----
    
// //    if(strlen(argv[1])> 1)
// //             {
// //                 printf("no");
// //         }
// //         else if (ft_isalnum(argv[1][0]))
// //                 printf("is alnum");
// //             else printf("non");
   
  
//     // isascii-----

//     // if(argc >= 2){
//     //     if(ft_isascii(atoi(argv[1])))
//     //         printf("is ascii");
//     //     else printf("non");
//     // }else printf("number of agr should be less then 2");
    
//     // isprint

//     // if(argc >= 2){
//     //     if(ft_isprint(atoi(argv[1])))
//     //         printf("is print");
//     //     else printf("non");
//     // }else printf("number of agr should be less then 2");

//     // strlen----
    
//     //     if(argc >= 2){
//     //         printf("%zu",ft_strlen(argv[1]));
        
//     // }else printf("number of agr should be less then 2");

//     // memset----
    
//     // ft_memset(argv[1], argv[2][0], strlen(argv[1]));
//     // printf("%s",argv[1]);
    
//     // bzero------
//     // ft_bzero(argv[1], strlen(argv[1]));
//     // printf("%s",argv[1]);
//     // return (0);
   
//    //memcpy------------
//     //   ft_memcpy(argv[1],  argv[2], strlen(argv[2]));
//     //   printf("%s",argv[1]);
    
//     //memmove-------
//     // ft_memmove(argv[1], argv[1] + 3, strlen(argv[1] + 3));
//     // printf("%s\n",argv[1]);
    
    
//     // strlcpy-----------------------
//         // char  dst[10];
//         // char  dst1[10];
//         // int res2, res1;
//         // char src[14] = "hello world !";
//         // res2 = ft_strlcpy(dst, src, 9);
//         // res1 = strlcpy(dst1, src, 9);
//         // puts(dst);
//         // puts(dst1);
    
//     // strlcat-------------------------
//         // char  dst[10] = "hill";
//         // char  dst1[10] = "hill";
//         // int res2, res1;
//         // char src[100] = "hello world!";
//         // res1 = ft_strlcat(dst, src, 6);
//         // res2 = strlcat(dst1, src, 6);
//         // printf("%d\n", res1);
//         // printf("%d\n", res2);
        
//         // puts(dst);
//         // puts(dst1);
    
//     //toupper-----------------
//     // 
//     // printf(" %d ", toupper(c));

//     //tolower---------------------
//         //printf(" %d ", tolower(c));
        
//     // strchr------------
    
//         // char src[10] = "hello";
//         // char c = 'o';
//         // char * st;
//         // st = ft_strchr(src, c);
//         // puts(st);
        
//     // strrchr------------
    
//         //  char src[10] = "heollohh";
//         //  char c = 'o';
//         //  char * st;
//         //  st = ft_strrchr(src, c);
//         //  puts(st);

//     // strncmp
//         // char s1[10] = "healo";
//         // char s2[10] = "heclo2";
//         // int res = ft_strncmp(s1, s2, 3);
//         // if(res > 0)
//         //     printf("s1 greater than s2");
//         // else if (res < 0)
//         //     printf("s1 less than s2");
//         //     else
//         //         printf("s1 eqaul to s2");
//     // memchr --------------------------
// //    const char str[] = "http://www.tutorialspoint.com";
// //    const char ch = '-';
// //    char *ret;

// //    ret = memchr(str, ch, strlen(str));

// //    printf("String after |%c| is - |%s|\n", ch, ret);

   
//     // memcmp------------------------------
//         //     char str1[15];
//         //     char str2[15];
//         //    int ret;

//         //    memcpy(str1, "aBcdef", 6);
//         //    memcpy(str2, "abCDEF", 6);

//         //    ret = memcmp(str1, str2, 5);

//         //    if(ret > 0) {
//         //       printf("str2 is less than str1");
//         //    } else if(ret < 0) {
//         //       printf("str1 is less than str2");
//         //    } else {
//         //       printf("str1 is equal to str2");
//         //    }
//     // atoi----------------------------------------
//         // int p,q;
// 		// p = ft_atoi( argv[1]);
// 		// q = atoi(argv[1]);
// 		// printf("%d\n",p);
// 		// printf("%d\n",q);
//     // calloc -------------------------------------------
//         // int i;
//         // int * pointer = (int *) ft_calloc( 13, sizeof(int) );

//         // for (i=0; i<13; i++ ) {
//         //     printf( "%d ", pointer[i] );
//         //     }
//         // printf( "\n" );
//         // free( pointer );


//     // strdup----------------------------------------
//     // const char * original = "The original string.";

//     // // On duplique la chaîne de caractères initiale.
//     // char * copy = ft_strdup( original );
    
//     // // On passe chaque lettre en majuscule.
//     // char * ptr = copy;
//     // while( *ptr != '\0' ) {
//     //     *ptr = ft_toupper( *ptr );
//     //     ptr++;
//     // }

//     // // On affiche la chaîne finale
//     // printf( "%s\n", copy );

//     // // Sans oublier de libérer l'espace mémoire au final.
//     // free( copy );

//     //strnstr----------------------------------
    
//     // char str[] = "hllo world !";
//     // char str1[] = "llo";
//     // char * str2;
//     // str2 = ft_strnstr(str, str1, 2);
//     // puts(str2);
//     //substr-------------------------------------
//     // char *str = "ahmed";
// 	// char *str1;
// 	// str1 = ft_substr(str, 2, 2);
// 	// puts(str1);

//     // strjoin---------------------------------------
//     // char *str = "ahm";
// 	// char *str1 = "alihefefefecce";
// 	// char *join;
// 	// join = ft_strjoin(str, str1);
// 	// puts(join);
    
//     //strtrim------------------------------------------
//     // char *s;

// 	// s = "aaabbbbccccdeddbbbccccbjfgkljdglkfjgkjbaaa";
// 	// printf("%s\n", ft_strtrim(s, "abc\0"));
//     //ft_split ----------------------------------------
 
// 	    // char **p;
// 	    // int i;
// 	    // i = 0;
// 	    // char *s = "hello|worldh|I'm|here|jjjjj";
// 	    // p = ft_split(s, '|');
// 	    // while(p[i]){
// 	    // 	puts(p[i]);
// 	    // 	i++;
// 	    // }
//         //hello|world|I'm|here|thanks|forall
    
//     // ft_itoa ----------------------------------------
    
//         return 0;



 
//}