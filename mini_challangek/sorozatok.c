
/*
BE: szám              
CIKLUS AMÍG szám ≠ −1, ADDIG
    szám feldolgozása...
    BE: szám           
CIKLUS VÉGE
*/

#include <stdio.h>
#define visszater return




int main(void){

    //________________________ addig mig -1 _____________________________________________
    int bekeres;
    printf("Feladat 1:. Kerek egy szamot: ");
    scanf("%d",&bekeres);
    printf("skibidi %d\n",bekeres);

    while (bekeres != -1){
        printf("Addig megy a ciklus mig -1 et kapok...\n");
        printf("Feladat 1:. Kerek egy szamot: ");
        scanf("%d",&bekeres);
    }
    //________________________ sum függvény _____________________________________________

    /*összeg = 0                     
    CIKLUS AMÍG van még szám, ADDIG
        szám = következő elem
        összeg = összeg + szám
    CIKLUS VÉGE

    KI: összeg*/
    printf("\n________________________ sum fuggveny ____________________\n");
    int osszeg = 0;
    int beker;
    printf("Feladat 2:. Kerek egy szamot: ");
    scanf("%d",&beker);

    while (beker != -1){
        printf("Feladat 2:. Kerek egy szamot: ");
        scanf("%d",&beker);

        osszeg = osszeg + beker; // akkumulátor növelése vagy csökkenése
        printf("ossz eddig: %d\n",osszeg);

    }
    printf("Feladat 2:. az Osszeg variable osszerteke: %d ",osszeg);




    printf("\n________________________ faktorialis ____________________\n");


    int fakt = 1;
    int bek;
    printf("Feladat 3:. Kerek egy szamot: ");
    scanf("%d",&bek);

    for (int c = 1; c <= bek; c++){
        fakt *= c;
    }
    printf("Feladat 3:. az szám: %d fakt osszerteke: %d ",bek, fakt);



  


    visszater 0;
}