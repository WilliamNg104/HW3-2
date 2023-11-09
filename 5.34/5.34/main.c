//
//  main.c
//  5.34
//
//  Created by William Ng on 2023/11/06.
//

#include <stdio.h>
#include <stdlib.h>
int power(int basemod, int exponent)
{
    if (exponent == 0)
        return 1;
    else
        return basemod * power(basemod, exponent-1);
}

int main()
{
    int basemod,exponent;
    printf("Enter base: ");
    scanf("%d", &basemod);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("%d power %d is %d\n", basemod, exponent, power(basemod, exponent));
    return 0;
    
}
