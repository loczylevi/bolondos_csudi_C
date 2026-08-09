
#include <stdio.h>
#include <math.h>

// gcc masodfoku.c -o masod -lm && ./masod 
// gcc masodfoku.c -o masod && ./masod 

/*Írj programot, amely az ax2+bx+c=0 másodfokú egyenlet együtthatóit kérdezi a felhasználótól,
 és kiírja, hogy az egyenletnek hány (valós) megoldása van! Ehhez használnod kell az elágazásról tanultakat:
 lásd az előadást! A megoldóképlet:*/



int main(){
    int a;
    int b;
    int c;

    double diszkriminans;

    double x1;
    double x2;


    printf("Kérem az A változó értékét: ");
    scanf("%d", &a);

    printf("Kérem az B változó értékét: ");
    scanf("%d", &b);

    printf("Kérem az C változó értékét: ");
    scanf("%d", &c);

    printf("%dx**2 %dx %d=0\n", a,b,c);


    diszkriminans = (b*b) - (4*a*c);

    if (diszkriminans > 0){
        x1 = (-1*b - sqrt(pow(b,2) - (4*a*c)))/ (2*a);
        x2 = (-1*b + sqrt(pow(b,2) - (4*a*c)))/ (2*a);

        printf("X1 = %f\nX2 = %f\n", x2, x1);
    }

    else if (diszkriminans == 0){
        x1 = (-1*b - sqrt(pow(b,2) - (4*a*c)))/ (2*a);
        printf("X1 = %f\n", x1);
    }

    else if (diszkriminans < 0){
        printf("Nincs megoldás a valós számok halmazán!\n");
    }
    
    return 0;


}


/*egyenlet	megoldás
2x2-x-6=0	x1=2, x2=-1.5
x2-12x+35=0	x1=5, x2=7*/


/*egyenlet	megoldás
2x2-4x+2=0	x=1
x2+2x+10=0	-*/
