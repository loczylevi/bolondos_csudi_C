#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define szoveg "Ausztria;1995.01.01"  // ez most egy konstans geco [megváltozhatatlan spermium]

#define ha if 


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



       // "Ausztria;1995.01.01" 
        char tarolo[20];
        char datum2[20];
        int x = 0;
    for (int i = 0; i < meddig; i++) {
        ha (szoveg[i] != ';') 
        {
            tarolo[i] = szoveg[i];
            x++;  
        }
        else {
            tarolo[i] = '\0';
            break;
        }
    }
       
    printf("%s\n", tarolo);

    char datum[20];
    int mehet_e = 0;
    int y = 0;
    int z = 0;
    int karakterek_szama = strlen(szoveg);

    while (y <= strlen(szoveg))
    {
        ha (mehet_e == 1)
        {
    
            // printf("%c",szoveg[y]);
            datum[z] = szoveg[y];
            z++;
            
        }

        ha (szoveg[y] == ';')
        {
            mehet_e = 1;
        }
        y++;
    }
 

   printf("\ndatum valtozo: %s\n", datum);


    for (int i = 0; i <= strlen(datum); i++)
    {
        ha (strlen(datum) == i)
        {
            printf("\nutcsó: %c",datum[i]);
            datum[i] = '\0';
        }
        else{
            printf("\n%c",datum[i]);
        }
        
    }
    
    printf("\ndatum2: %s",datum );

    // Memória felszabadítása
    for (int i = 0; i < 100; i++) {
        free(lista[i]);
    }
    free(lista);

    return 0;
}


