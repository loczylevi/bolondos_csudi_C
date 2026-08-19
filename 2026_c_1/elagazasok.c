/*
Készíts programot, mely a felhasználótól bekért számról megállapítja,
hogy az a.) pozitív, negatív vagy nulla, b.) egész vagy nem egész. 
Az eredményt a képernyőre szöveges válasz formájában írja ki!
*/


#include <stdio.h>

int main(){
    printf("a.) __________________________________________________\n");

    // a.)           
    int beker;

    printf("Kérek egy szamot: ");
    scanf("%d", &beker);

    if (beker > 0)
    {
        printf("A %d pozitiv", beker);
    }
    else if (beker < 0)
    {
        printf("A %d negativ", beker);
    }
    else{
        printf("A %d nulla", beker);
    }
    printf("\n");

    printf("b.) __________________________________________________\n");

    double beker2;

    printf("Kérek egy szamot: ");
    scanf("%lf", &beker2);

    if ((int)beker2 == beker2) // hu de fura a casting xd
    {
        printf("Ez %f egy egész szám!", beker2);
    }
    else 
    {
        printf("Ez %f NEM egész szám!", beker2);
    }
    
    

    return 0;


}

