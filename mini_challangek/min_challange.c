


#include <stdio.h>
#include <string.h>

int main(void){

    printf("Kerek egy szamot: ");

    char bekeres[100];
    scanf("%s", &bekeres);

    // printf("\nstring szam: %s\n",bekeres);

    //int meddig = strlen(bekeres) -1;

    int index = 0;
    int osszeg = 0;
    while (bekeres[index] != '\0'){

        
        printf("\n%c",bekeres[index]);


        osszeg = osszeg + (bekeres[index]-'0');

        index++;
    }

    printf("\nEredmeny: %d",osszeg);

    return 0;
}