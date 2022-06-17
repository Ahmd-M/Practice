#include <stdio.h>


int main()
{
    int number;

    do
    {
        scanf("%d", &number);
    } while (number<=0);
    
    for(int i=1; i<=number; i++)
    {
        printf("  ");
        for(int n=0; n<number-i; n++)
            printf(" ");
        for(int m=0; m<2*i-1; m++)
            printf("*");
        printf("\n");
    }


    return 0;
}

// 15 min 