


#include <stdio.h>
#include <math.h>


/*
Készíts programot, mely egy síkbeli háromszög 
a.) kerületét, b.) területét, c.) szögeit, d.) 
a három magasság hosszát (ma, mb, mc), képes kiszámítani. 
A háromszög pontjait (x,y) koordinátáival jellemezzük.
*/


int main(){

    int x1, y1, x2, y2, x3,y3;
    double a, b, c;
    double kerulet;
    double s;
    double terulet;

    printf("Kérem az első x,y kordinátát a hárömszögnek: ");
    scanf("%d %d", &x1, &y1);

    printf("Kérem a második x,y kordinátát a hárömszögnek: ");
    scanf("%d %d", &x2, &y2);

    printf("Kérem a harmadik x,y kordinátát a hárömszögnek: ");
    scanf("%d %d", &x3, &y3);

    

    // két kordináta közötti távolság

    a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    c = sqrt(pow(x3-x1,2) + pow(y3-y1,2));

    kerulet = a + b + c;

    printf("A háromszög kerülete: %f cm\n" , kerulet);

    // Héron képlet 

    s = (a+b+c) / 2;
    terulet = pow((s*(s-a)*(s-b)*(s-c)), 0.5);

    printf("A háromszög területe: %f cm^2\n" , terulet);

    double alfa, beta, gamma;

    alfa = acos((b*b+c*c-a*a)/(2*b*c));
    beta = acos((a*a+c*c-b*b)/(2*a*c));
    gamma = acos((a*a+b*b-c*c)/(2*a*b));

    printf("%f %f %f", alfa, beta, gamma);

    return 0;

}
