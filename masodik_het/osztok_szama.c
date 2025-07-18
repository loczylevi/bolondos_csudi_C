

/*
db = 0
CIKLUS AMÍG van még adat, ADDIG
    szám = következő elem
    HA igaz a feltétel adat-ra, AKKOR    melyikeket?
        db = db+1
    FELTÉTEL VÉGE
CIKLUS VÉGE
KI: db
*/

#include <stdio.h>


int main(void){
    int db = 0;
    int bekeres;
    printf("Kerek egy szamot: ");
    scanf("%d",&bekeres);
    for (int oszto = 1; oszto <=bekeres; oszto+=1){
        if (bekeres % oszto == 0){
            db += 1;
        }

    }

    printf("Ennek a szamnak: %d ennyi osztoja van: %d\n", bekeres, db);

    // Számoljuk meg, a begépelt szövegben hány „e” betű van!
    int e_betuk_db = 0;
    char szo[20];
    printf("Kerek egy szot: ");
    scanf("%19s",szo);        // a scanf megakadályozza hogy 19-nél ne tudjon többet irni
    // szo[19] = '\0';        // ez nem kell

    int index = 0;
    while (szo[index] != '\0'){
        if (szo[index] == 'e' || szo[index] == 'E'){
            e_betuk_db += 1;
        }
        index += 1;
    }
    printf("\nEbben a szoban: %s ennyi 'e' betu van: %d", szo, e_betuk_db);


    return 0;
}
