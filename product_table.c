#include <stdio.h>
#include <math.h>

int main()
{
    
    //enter your code here
    int number;

    do
    {
        scanf("%d", &number);
    } while (number<=0);
    
    printf(" X*Y I");
    for(int i=0; i<number+1; i++)
        printf("   %d", i);
    printf("\n");
    for(int i=0; i<(number+1)*4+6; i++)
        printf("-");
    printf("\n");

    for(int i=0; i<number+1; i++)
    {
        printf("  %d  I", i);
        for(int n=0; n<number+1; n++)
        {
            int order, v=1, num=i*n;
            while(num)
            {   
                order = v;
                num /= 10;
                v++;
            }
            
            printf("   ");
            for(int w=1; w<order; w++)
                if(i*n)
                    printf("\b",order);
            printf("%d", i*n);
        }
        printf("\n");
    }

    
    return 0;
}


/*

Displays the product table for N varying from 1 to a strictly positive number read on the keyboard. Below is the table up to 10.

 X*Y I   0   1   2   3   4   5   6   7   8   9  10
--------------------------------------------------
  0  I   0   0   0   0   0   0   0   0   0   0   0
  1  I   0   1   2   3   4   5   6   7   8   9  10
  2  I   0   2   4   6   8  10  12  14  16  18  20
  3  I   0   3   6   9  12  15  18  21  24  27  30
  4  I   0   4   8  12  16  20  24  28  32  36  40
  5  I   0   5  10  15  20  25  30  35  40  45  50
  6  I   0   6  12  18  24  30  36  42  48  54  60
  7  I   0   7  14  21  28  35  42  49  56  63  70
  8  I   0   8  16  24  32  40  48  56  64  72  80
  9  I   0   9  18  27  36  45  54  63  72  81  90
 10  I   0  10  20  30  40  50  60  70  80  90 100

For example:

Input	Result
-4 5
 X*Y I   0   1   2   3   4   5
------------------------------
  0  I   0   0   0   0   0   0
  1  I   0   1   2   3   4   5
  2  I   0   2   4   6   8  10
  3  I   0   3   6   9  12  15
  4  I   0   4   8  12  16  20
  5  I   0   5  10  15  20  25

*/