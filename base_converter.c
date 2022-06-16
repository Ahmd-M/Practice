#include <stdio.h>
#include <math.h>

void myCode();

void main()
{
    myCode();
}


void myCode()
{
    int num, b1, b2;
    int decimal=0, i=0, rem;
    
    scanf("%d%d%d", &num, &b1, &b2);

    if(b1==2 && b2==10)
    {
        while(num)
        {
            rem = num % 10;
            decimal += rem * pow(2,i);
            num /= 10;
            i++;
        }
    }
    
    if(b1==10 && b2==2)
    {
        i = 128;
        while(i>0)
        {
            printf("%d", num/i);
            num%=i;
            i/=2;
        }
    }
}