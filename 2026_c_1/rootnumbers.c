/*
Írj programot, amely kiírja az első N darab négyzetszámot! 
N értékét kérd a felhasználótól!
Írd ki a képernyőre az összes N-nél kisebb négyzetszámot! 
Vigyázz: ez nem ugyanaz a feladat, mint az előző!
*/


#include <stdio.h>


int main(){

    int n;
    printf("Kérek egy számot: ");
    scanf("%d", &n);

    int i = 1;
    while ((i*i) < n)
    {
        printf("%d\n", i*i);
        i++;
    }

    return 0;
}
