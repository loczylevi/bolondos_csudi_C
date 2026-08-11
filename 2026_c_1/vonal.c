
/*
8. Adott hosszúságú vonal
Írj egy programot, amely kér a felhasználótól egy számot, és kirajzol egy + és − jelekből álló szakaszt. Pl. ha a szám 4,
akkor a képernyőn a lenti ábra jelenjen meg, vagyis a belsejében 4 db − legyen:

Mekkora legyen a szakasz? 4
+----+
Írd meg a program pszeudokódját, utána pedig gépen a C forráskódot! A pszeudokódot írhatod a fejlesztőkörnyezetbe megjegyzésként is, az egyes sorok alá odaírva
 a C nyelvű megfelelőjüket.

Tipp: ehhez a programhoz nem kell if elágazás. Ha olyan változatot írtál, amiben van, akkor próbáld meg anélkül is!
 Gondolj arra, hogy a szakasz elején és végén biztosan van +.*/



/*
valtozo = beker
KIIR:: kÉREK EGY SZÁMOT
BEKÉR: SZÁM
KIIR:: +
ismétlés amig a ciklusváltozo kisebb mint SZÁM
    kiir:: -
KIIR:: +       
*/


 #include <stdio.h>


 int main(){
    int beker;
    printf("Kérek egy számot: ");
    scanf("%d", &beker);


    printf("+");
            for (int i = 0; i < beker; i++){
                printf("-");
            }

    printf("+");





    return 0;
 }
