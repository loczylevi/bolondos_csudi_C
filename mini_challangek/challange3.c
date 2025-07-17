
#include <stdio.h>
#include <string.h>


int main(void){
    
    char bekeres[100];
    char forditott[100];

    printf("Kerek szamot/sztringet: ");
    scanf("%s",bekeres);

    int mekkora = strlen(bekeres)-1;
    //printf("%d",mekkora);

    int index = 0;
    int igaz_e = 0;
    while (mekkora >= 0){

        // printf("\n%c",bekeres[mekkora]);
        
        forditott[index] = bekeres[mekkora];
        if (bekeres[index] == bekeres[mekkora]){

            igaz_e += 1;
        }
        

        mekkora--;
        index++;


    }

    printf("\nForditottja: %s",forditott);


    (igaz_e == index) ? printf("\nEz polindrom: %s",forditott) : printf("\nEz NEM polindrom: %s",forditott);

    return 0;
}