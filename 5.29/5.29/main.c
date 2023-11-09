//
//  main.c
//  5.29
//
//  Created by William Ng on 2023/11/06.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num1, num2, maxValue;

   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);
   maxValue = (num1 > num2) ? num1 : num2;

   while(1) 
   {
      if ((maxValue % num1 == 0) && (maxValue % num2 == 0))
      {
         printf("LCM: %d", maxValue);
         break;
      }
      ++maxValue;
   }
   return 0;
}
