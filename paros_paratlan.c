// https://infoc.eet.bme.hu/ea01/

#include <stdio.h>

int main()
{
    /*
    24. Elágazás: feltételes végrehajtás
    Feladat: Írjunk programot, amely kér egy számot a felhasználótól.
    Mondja meg, hogy páros-e vagy nem.
    */

    int bekeres;
    printf("\nKerek egy szamot:\t");
    scanf("%d", &bekeres);
    printf("\n%d", bekeres);

    while (bekeres != 0) {
        if (bekeres % 2 == 0) {
            printf("\nEz a number: %d paros!!!", bekeres);
        }
        else {
            printf("\nEz a number: %d paratlan!!!", bekeres);
        }

        printf("\nKerek egy szamot:\t");
        scanf("%d", &bekeres);
        printf("\n%d", bekeres);
    }

    return 0;
}
