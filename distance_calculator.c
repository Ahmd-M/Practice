#include <stdio.h>
#include <math.h>

int main()
{
    //enter your code here
    
    int XA, XB;
    int YA, YB;
    double DISTANCE, deltaX_squared, deltaY_squared;
    
    scanf("%d %d", &XA, &YA);
    scanf("%d %d", &XB, &YB);
    
    deltaX_squared = pow((XB-XA),2);
    deltaY_squared = pow((YB-YA),2);
    
    DISTANCE = sqrt(deltaX_squared + deltaY_squared);
    
    printf("%.2lf", DISTANCE);
    
    
    return 0;
}