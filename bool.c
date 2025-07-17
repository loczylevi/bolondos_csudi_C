


#include <stdio.h>
// #include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#ifndef STDBOOL_H
    #define STDBOOL_H

    #define true 1
    #define false 0
    #define bool unsigned char

#endif

#define szoveg "Ausztria;1995.01.01"


int meddig;

int str_hossz(char tomb[]){
    int meddig = 0;
    int szoveg_hossz;
    szoveg_hossz = strlen(tomb);
    for (int i = 0; i < szoveg_hossz; i++)
    {
        meddig = meddig + 1;
    }
    
        
        return meddig;
    }


int main()
{
    char c[30] = szoveg;
    printf("xd %s\n", c);
    meddig = strlen(szoveg); // meddig beállítása
    printf("%d\n", str_hossz(c));

    char** lista = (char**) malloc(100 * sizeof(char*));

    for (int i = 0; i < 100; i++) {
        lista[i] = (char*) malloc(101 * sizeof(char));
    }

    for (int i = 0; i < meddig; i++) {
        if (szoveg[i] != ';') 
        {
            lista[i][0] = szoveg[i];  // első karakter a szoveg-ből
        lista[i][1] = '\0';  
        }
        else {
            break;
        }
        
 
    }

    char karakterlanc[10] = "skibidi";
    int index = 0;
    bool ize = false;
    while (karakterlanc[index] != '\0')
    {
        printf("%c",karakterlanc[index]);

        (karakterlanc[index] == 'i') ? ize = true : ize;

        if (ize)
        {
            break;
        }
        
        index++;
        
    }
    
    


    

    // Memória felszabadítása
    for (int i = 0; i < 100; i++) {
        free(lista[i]);
    }
    free(lista);

    return 0;
}


