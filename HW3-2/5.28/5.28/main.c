//
//  main.c
//  5.28
//
//  Created by William Ng on 2022/11/01.
//

#include<stdio.h>
#include<stdlib.h>
int main()
{
 char ch;
 printf("Enter any character : ");
 scanf("%ch", &ch);
 if(ch>='A' && ch<='Z')
     ch=ch+32;
 else if(ch>'a' && ch<='z')
     ch=ch-32;
 printf("Convert case of character : %c",ch);
 return 0;
}
