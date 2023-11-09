//
//  main.c
//  5.35
//
//  Created by William Ng on 2023/11/06.
//

#include <stdio.h>
int main()
{
    int Number, Next, Second = 1, sum = 0;

    printf("\n Enter the Range Number: ");
    scanf("%d",&Number);
    
    for(int First = 0; First <= Number;)
    {
        printf("%d ", First);
                  sum = sum + First;
                  Next = First + Second;
        First = Second;
                  Second = Next;
    }
    printf("\nThe Sum = %d\n", sum);
}
