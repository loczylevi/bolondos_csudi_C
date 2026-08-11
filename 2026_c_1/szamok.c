
#include <stdio.h>


/*Gondolok egy számra, legyen ez 1.
Ismétlés, amíg a szám ≤ 20
    Leírom a számot.
    Új sort kezdek.
    Növelem a számot 1-gyel.
Ismétlés eddig*/


int main(){

    int beker;

    printf("Gondolok egy számra, legyen ez ");
    scanf("%d", &beker);

    while (beker <= 20){
        printf("leirom a számot: %d", beker);
        printf("\n");
        beker++;
    }

    printf("_____________________________________________________________\n");
    

    int beker2;

    printf("Gondolok egy számra, legyen ez ");
    scanf("%d", &beker2);

    for (int i = beker2; i <= 20; i++)
    {
        printf("leirom a számot: %d", i);
        printf("\n");
    }
    

    return 0;
}
