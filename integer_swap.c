#include <stdio.h>

int main()
{
    int A, B, C , aux;
    scanf("%d %d %d", &A, &B, &C);
    // add your code here, do not erase or modify what's already written

    aux = A;
    A = C;
    C = B;
    B = aux;
    
    
    printf("%d %d %d\n",A,B,C);
    return 0;
}