#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE* fj;
    
    char** lista = (char**) malloc(100*sizeof(char*));     // pointerek halmaza memoria cellák lefoglalása

    for(int i=0;i < 100; i++){
        lista[i] = (char*) malloc(101*sizeof(char));   //100 db. pointer lefoglalása
    }




    fj = fopen("EUcsatlakozas.txt","r");

    if (fj == NULL)
    {
        printf("Hiba: a fájlt nem sikerült megnyitni!\n");
        return 1;
    }

    printf("Fájl sikeresen megnyitva!\n");


    
    int db = 0;

    while (fgets(lista[db],100,fj) != NULL)
    {
        printf("Beolvasott sor: %s", lista[db]);
        // lista[db] = tomb;
        db += 1;
        
    }
    
    printf("\nBeolvasott sor: %s", lista[0]);

    fclose(fj);
    
    
    for(int i=0;i < 100; i++){
        free(lista[i]);
    }

    free(lista);
    
    return 0;
}
