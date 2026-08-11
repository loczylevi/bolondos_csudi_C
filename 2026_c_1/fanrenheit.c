

/*

Celsius–Fahrenheit
Készíts programot, amely bekér a felhasználótól egy valós számot (Celsius fok),
az eredményt átváltja Fahrenheit értékbe, és kiírja az eredményt a képernyőre (0°C=32°F, 40°C=104°F, lineáris)! 
Írd meg ugyanezt fordítva is!

*/




/*F=C×(9/5)​+32*/

/*C=(F−32)×(5/9)*/


#include <stdio.h>

int main(){
    double c;
    printf("Kérek egy Celsius fokot: ");
    scanf("%lf", &c);

    double atvalto = c * (9.0/5.0) + 32.0;

    printf("Fanrenheitbe: %.2lf°C=%.2lf°F", c, atvalto); // %.2lf  %.2 --> hány tizedes jegy lf --> lonf flooooatt


    


    return 0;
}
