#include <stdio.h>



int main()
{    
    /*20. A kör kerülete és területe
Feladat: írjunk programot, amely megkérdezi a felhasználót, mekkora egy kör sugara, majd kiírja a kör kerületét és területét!

Ez az első interaktív programunk, amely nem csak kiír valamit, hanem kérdez is a felhasználótól – sőt az eredmény a felhasználó által adott bemenő adattól függ.

A megoldás algoritmusa: követjük az események sorrendjét:

Megkérdezzük a felhasználót, mekkora a kör.
Megvárjuk, amíg válaszol (és megjegyezzük a választ).
Kiírjuk a kerületet és a területet.
(Vagy épp másképp is megközelíthetjük: ahhoz, hogy kiírjuk az eredményt, előbb a bemenő adatokra van szükségünk. Anélkül úgysem menne. Az adatok beolvasása előtt pedig feltesszük a kérdést, mert később már nem lenne értelme.)

A kör sugarát a sugar nevű változóban tároljuk. Azért kell eltárolni, mert a billentyűzetről beolvasott értékre a programban több helyen is hivatkozunk: egyrészt akkor, amikor jelezzük, hogy hova kell beolvasni; másrészt a kerület kiszámításakor; harmadrészt a terület kiszámításakor.*/    

    // k = 2*r * 3.14
    // t = r**2 * 3.14
    /*
    int radius;
    printf("Kerem a kör sugarát: ");
    scanf("%D", radius);  // szóközig olvassa be a nevet

    int k;
    k = 2*radius * 3.14; 
    int t;
    t = radius*radius * 3.14; 
    printf("\na kör kerülete: %d", k);
    printf("\na kör területe: %d", t);
*/

    // _______________________________________________
    double sugar;
 
    printf("Mennyi a kör sugara? ");
    scanf("%lf", &sugar);
 
    printf("Kerülete: %f, területe: %f.\n",
           2*sugar*3.1416, sugar*sugar*3.1416);

}
