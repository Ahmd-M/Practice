#include <stdio.h>


void main(){
    int money, hundreds, fifties, twenties, tens, fives, ones;
    scanf("%d", &money);
    hundreds = money / 100000;            
    fifties = (money-hundreds*100000) / 50000;
    twenties = (money-hundreds*100000-fifties*50000) / 20000;
    tens = (money-hundreds*100000-fifties*50000-twenties*20000) / 10000;
    fives = (money-hundreds*100000-fifties*50000-twenties*20000-tens*10000) / 5000;
    ones = (money-hundreds*100000-fifties*50000-twenties*20000-tens*10000-fives*5000) / 1000;

    printf("%d %d %d %d %d %d", hundreds, fifties, twenties, tens, fives, ones);

}