

#include <stdio.h>


/*Tartaly festese

Milyen magas? 2
Mennyi az atmeroje? 1.2

4.900885 doboz festek kell.*/

int main(void){
    float magas;
    float atmero;
    float radius;
    float terulet;
    printf("Tartaly festese\n\n");
    printf("Milyen magas? ");
    scanf(" %f",&magas);
    printf("Mennyi az atmeroje? ");
    scanf(" %f",&atmero);
    radius = atmero / 2;
    terulet = ((2 * 3.1416) * (radius*radius) + 2 * 3.1416 * radius * magas) / 2;
    printf("\n%d %d %d",magas,atmero, radius);
    printf("\n%f doboz festek kell.",terulet);


    /*
    Pénzezés
    Készíts programot, mely bekéri a felhasználótól, hogy a kasszában hány 100, 200 és 500 Ft-os található. A program számolja ki, hogy mennyi a beírt pénz összege!
    */

    int lista[3][2] = {{100,0},{200,0},{500,0}};

    int ossz = 0;
    int bekeres;

    for (int i = 0 ; i < 3; i++){

        printf("\nHany darab %d ft van? ", lista[i][0]);
        scanf(" %d", &bekeres);
        lista[i][1] = bekeres;
    }

    for (int i = 0 ; i < 3; i++){

        printf("\n%d ft. / db: %d ", lista[i][0], lista[i][1]);
    }


    for (int i = 0 ; i < 3; i++){
        ossz += lista[i][1] * lista[i][0];
    }

    printf("\nOssz ertek: %d ",ossz);

/*
Celsius–Fahrenheit
Készíts programot, amely bekér a felhasználótól egy valós számot (Celsius fok), az eredményt átváltja Fahrenheit értékbe, és kiírja az eredményt a képernyőre (0°C=32°F, 40°C=104°F, lineáris)! Írd meg ugyanezt fordítva is!
*/

    printf("\nKerek egy szamot: %d ",ossz);
    int celsius;
    scanf(" %d",&celsius);
    double szamitas = (celsius*9/5)+ 32;
    printf("\n%d Celsius az %f Fahrenheit!", celsius, szamitas);
    
    /*
    Időtartam
    Készíts programot, mely két időpontot kérdez a felhasználótól (óra, perc, másodperc külön), majd kiszámítja a két időpont közötti időtartamot másodpercben, és az eredményt kiírja a képernyőre.
    */
   

    
    return 0;
}