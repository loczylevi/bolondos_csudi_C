/*Fizz buzz: a feladat
Mondjuk sorban a számokat, de ha
3 többszöröse, a szám helyett: „fizz”
5 többszöröse, akkor „buzz”
mindkettőé, akkor „fizzbuzz”*/ 
#include <stdio.h>

#define visszater return

int main(void){

    
    int meddig = 100;

    for (int i = 1; i < meddig; i++)
    {
        (i % 5 == 0 && i % 3 == 0) ? printf("fizzbuzz\n") : (i % 3 == 0) ? printf("fizz\n") : (i % 5 == 0) ? printf("buzz\n") : printf("%d\n",i);
    }
    


    visszater 0;
}