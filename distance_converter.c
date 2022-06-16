#include <stdio.h>

int main()
{
    double kilometers, miles, yards, feet, inches;

    scanf("%lf", &kilometers);
    miles = kilometers / 1.609;
    yards = (miles-(int)miles) * 1760;  
    feet = (yards-(int)yards)*3;
    printf("%lf\n", feet);
    inches = (feet-(int)feet)*12;
    printf("%d %d %d %.2lf", (int)miles, (int)yards, (int)feet, inches);

    return 0;
}