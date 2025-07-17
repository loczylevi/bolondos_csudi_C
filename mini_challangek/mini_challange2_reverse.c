


#include <stdio.h>
#include <string.h>


int main(void){
    
    char bekeres[100];

    printf("Kerek szamot: ");
    scanf("%s",bekeres);

    int mekkora = strlen(bekeres)-1;
    //printf("%d",mekkora);


    while (mekkora >= 0){

        printf("%c",bekeres[mekkora]);

        mekkora--;


    }


    return 0;
}