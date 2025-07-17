#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define szoveg "Ausztria;1995.01.01"  // ez most egy konstans geco [megváltozhatatlan spermium]


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


    

    // Memória felszabadítása
    for (int i = 0; i < 100; i++) {
        free(lista[i]);
    }
    free(lista);

    return 0;
}


