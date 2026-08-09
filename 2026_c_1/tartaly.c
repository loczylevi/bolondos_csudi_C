


#include <stdio.h>

#define PI 3.141592653589793

int main(){

    int heigh;
    float atmero;
    float teto_es_alja;
    float vegeredmeny;
    float radius;
    float henger_oldala;

    printf("Tartaly festese\n\n");
    printf("Milyen magas? ");
    scanf("%d", &heigh);
    printf("\nMennyi az atmeroje? ");
    scanf("%f", &atmero);

    radius = atmero / 2;

    vegeredmeny= (((radius*radius) * PI) *2) + heigh * (PI * atmero);

    printf("\n%f doboz festek kell.\n",  vegeredmeny/2);


    
    // teteje == r**2 * pi

    return 0;
}


/*Tartaly festese

Milyen magas? 2
Mennyi az atmeroje? 1.2

4.900885 doboz festek kell. */
