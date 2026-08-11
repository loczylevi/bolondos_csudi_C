
/*Pénzezés
Készíts programot, mely bekéri a felhasználótól, hogy a kasszában hány 100, 200 és 500 Ft-os található. 
A program számolja ki, hogy mennyi a beírt pénz összege!
*/

#include <stdio.h>


int main(){
    int szazas;
    int ketszazas;
    int otszazas;

    printf("Hány 100-as? ");
    scanf("%d", &szazas);

    printf("Hány 200-as? ");
    scanf("%d", &ketszazas);

    printf("Hány 500-as? ");
    scanf("%d", &otszazas);

    printf("Özzses pénz összege: %d", szazas*100 + ketszazas*200 + otszazas* 500);


    return 0;
}
