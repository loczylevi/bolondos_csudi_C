
/*
Írj programot, amely hatványozni képes! 
Kérdezze meg az alapot (valós) és a kitevőt (egész), 
és írja képernyőre a hatvány értékét!
*/

#include <stdio.h>
#include <math.h>


int main(){
    int kitevo;
    double valos;
    printf("Kérem az alapot: ");
    scanf("%lf", &valos);

    printf("Kérem a kitevőt: ");
    scanf("%d", &kitevo);
    
    printf("Eredmény: %.2lf\n", pow(valos, kitevo));




    return 0;
}
