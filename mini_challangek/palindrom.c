
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
    int palindrom = 1;
    while (mekkora >= 0){

        // printf("\n%c",bekeres[mekkora]);
        
        forditott[index] = bekeres[mekkora];
        if (bekeres[index] != bekeres[mekkora]){

            palindrom = 0;
        }
        

        mekkora--;
        index++;


    }
     forditott[index] = '\0';

    printf("\nForditottja: %s",forditott);


    (palindrom) ? printf("\nEz polindrom: %s",forditott) : printf("\nEz NEM polindrom: %s",forditott);

    return 0;
}
